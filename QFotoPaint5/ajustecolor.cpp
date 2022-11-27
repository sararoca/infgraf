#include "ajustecolor.h"
#include "ui_ajustecolor.h"
#include "imagenes.h"
Ajustecolor::Ajustecolor(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ajustecolor)
{
    ;
    ui->setupUi(this);
    nfoto= numfoto;
    set_callback_foto(nfoto, false);
    sumaB= 0.0;
    multiplicaB= 1.0;
    sumaG= 0.0;
    multiplicaG= 1.0;
    sumaR= 0.0;
    multiplicaR= 1.0;
}

Ajustecolor::~Ajustecolor()
{
    delete ui;
}
void Ajustecolor::actualizarB()
{
    double brillo= ui->horizontalSlider->value();
    double contraste= ui->horizontalSlider_2->value();
    if (contraste>0)
        multiplicaB= 1.0/(1.01-contraste/100);
    else
        multiplicaB= 1.0+contraste/100;
    sumaB= (multiplicaB+1)*brillo/2-128*(multiplicaB-1);

    if (ui->checkBox->isChecked())
       ajuste_color(nfoto, sumaB, multiplicaB, sumaG, multiplicaG, sumaR, multiplicaR);
    else
        mostrar(nfoto);
}
void Ajustecolor::actualizarG()
{
    double brillo= ui->horizontalSlider_3->value();
    double contraste= ui->horizontalSlider_4->value();
    if (contraste>0)
        multiplicaG= 1.0/(1.01-contraste/100);
    else
        multiplicaG= 1.0+contraste/100;
    sumaG= (multiplicaG+1)*brillo/2-128*(multiplicaG-1);

    if (ui->checkBox->isChecked())
       ajuste_color(nfoto, sumaB, multiplicaB, sumaG, multiplicaG, sumaR, multiplicaR);
    else
        mostrar(nfoto);
}

void Ajustecolor::actualizarR()
{
    double brillo= ui->horizontalSlider_5->value();
    double contraste= ui->horizontalSlider_6->value();
    if (contraste>0)
        multiplicaR= 1.0/(1.01-contraste/100);
    else
        multiplicaR= 1.0+contraste/100;
    sumaR= (multiplicaR+1)*brillo/2-128*(multiplicaR-1);

    if (ui->checkBox->isChecked())
       ajuste_color(nfoto, sumaB, multiplicaB, sumaG, multiplicaG, sumaR, multiplicaR);
    else
        mostrar(nfoto);
}



void Ajustecolor::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}

void Ajustecolor::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);

}

void Ajustecolor::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    actualizarB();
}


void Ajustecolor::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
    actualizarB();
}


void Ajustecolor::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
}

void Ajustecolor::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
}

void Ajustecolor::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
    actualizarG();
}

void Ajustecolor::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
    actualizarG();
}



void Ajustecolor::on_spinBox_5_valueChanged(int arg1)
{
    ui->horizontalSlider_5->setValue(arg1);
}

void Ajustecolor::on_spinBox_6_valueChanged(int arg1)
{
    ui->horizontalSlider_6->setValue(arg1);
}

void Ajustecolor::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(value);
    actualizarR();
}

void Ajustecolor::on_horizontalSlider_6_valueChanged(int value)
{
    ui->spinBox_6->setValue(value);
    actualizarR();
}




void Ajustecolor::on_Ajustecolor_accepted()
{
    actualizarB();
    ajuste_color(nfoto, sumaB, multiplicaB, sumaG, multiplicaG, sumaR, multiplicaR, true);
}

void Ajustecolor::on_Ajustecolor_rejected()
{
    mostrar(nfoto);
}
