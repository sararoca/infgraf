#include "rotarangulo.h"
#include "ui_rotarangulo.h"
#include "imagenes.h"

Rotarangulo::Rotarangulo(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rotarangulo)
{
    ui->setupUi(this);
    nfoto=numfoto;
    angulo =0;
    escala=1.0;
    modo=0;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);

}

Rotarangulo::~Rotarangulo()
{
    destroyWindow("Rotar imagen");
    delete ui;
}

void Rotarangulo::on_dial_valueChanged(int value)
{
    angulo=value;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);
}

void Rotarangulo::on_radioButton_clicked()
{
    modo=0;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);
}

void Rotarangulo::on_radioButton_2_clicked()
{
    modo=1;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);
}

void Rotarangulo::on_radioButton_3_clicked()
{
    modo=2;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);
}

void Rotarangulo::on_horizontalSlider_valueChanged(int value)
{
    escala= value/100.0;
    Mat rotada;
    rotar_angulo(foto[nfoto].img,rotada,angulo,escala,modo);
    imshow("Rotar imagen" , rotada);
}
