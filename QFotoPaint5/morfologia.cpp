#include "morfologia.h"
#include "ui_morfologia.h"
#include "imagenes.h"

Morfologia::Morfologia(int numfoto,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Morfologia)
{
    ui->setupUi(this);
    nfoto= numfoto;
    operacion=1;
    itera=1;
    ver_morfologia(nfoto, itera,operacion);

}

Morfologia::~Morfologia()
{
    delete ui;
}

void Morfologia::on_spinBox_valueChanged(int arg1)
{
    itera=arg1;
    ver_morfologia(nfoto, itera,operacion);
}

void Morfologia::on_radioButton_clicked()
{
    operacion=1;
    ver_morfologia(nfoto, itera,operacion);
}

void Morfologia::on_radioButton_2_clicked()
{
    operacion=2;
    ver_morfologia(nfoto, itera,operacion);
}


void Morfologia::on_radioButton_3_clicked()
{
    operacion=3;
    ver_morfologia(nfoto, itera,operacion);
}

void Morfologia::on_radioButton_4_clicked()
{
    operacion=4;
    ver_morfologia(nfoto, itera,operacion);
}



void Morfologia::on_Morfologia_accepted()
{

    ver_morfologia(nfoto, itera,operacion, true);
    destroyWindow("Morfologia");
}

void Morfologia::on_Morfologia_rejected()
{
    destroyWindow("Morfologia");
}
