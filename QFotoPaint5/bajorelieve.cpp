#include "bajorelieve.h"
#include "ui_bajorelieve.h"

#include "imagenes.h"

bajorelieve::bajorelieve(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bajorelieve)
{
    ui->setupUi(this);
    nfoto = numfoto;
    fondo=0;
    grado=1.0;
    angulo=0;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}

bajorelieve::~bajorelieve()
{
    delete ui;
}

void bajorelieve::on_horizontalSlider_valueChanged(int value)
{
    grado= value/100.0;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}

void bajorelieve::on_dial_valueChanged(int value)
{
    angulo = value;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}


void bajorelieve::on_radioButton_clicked()
{
    fondo = 0;
    ver_bajorelieve(nfoto, angulo, grado, fondo);

}

void bajorelieve::on_radioButton_2_clicked()
{
    fondo = 1;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}

void bajorelieve::on_radioButton_3_clicked()
{
    fondo = 2;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}

void bajorelieve::on_radioButton_4_clicked()
{
    fondo = 3;
    ver_bajorelieve(nfoto, angulo, grado, fondo);
}


void bajorelieve::on_buttonBox_accepted()
{
    ver_bajorelieve(nfoto, angulo, grado, fondo, true);
    destroyWindow("Bajo relieve");
}

void bajorelieve::on_buttonBox_rejected()
{
    destroyWindow("Bajo relieve");
}

