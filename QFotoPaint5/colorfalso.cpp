#include "colorfalso.h"
#include "ui_colorfalso.h"
#include "imagenes.h"

ColorFalso::ColorFalso(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColorFalso)
{
    ui->setupUi(this);
    nfoto = numfoto;
    paleta = 0;
    set_callback_foto(nfoto, false);
}

ColorFalso::~ColorFalso()
{
    set_callback_foto(nfoto, true);
    delete ui;
}



void ColorFalso::on_radioButton_clicked()
{
    paleta = 0;
    convertir_color_falso(nfoto, paleta);
}


void ColorFalso::on_radioButton_2_clicked()
{
    paleta = 1;
    convertir_color_falso(nfoto, paleta);
}


void ColorFalso::on_radioButton_16_clicked()
{
    paleta = 2;
    convertir_color_falso(nfoto, paleta);

}

void ColorFalso::on_radioButton_11_clicked()
{
    paleta = 3;
    convertir_color_falso(nfoto, paleta);
}



void ColorFalso::on_radioButton_12_clicked()
{
    paleta = 4;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_20_clicked()
{
    paleta = 5;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_13_clicked()
{
    paleta = 6;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_19_clicked()
{
    paleta = 7;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_14_clicked()
{
    paleta = 8;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_17_clicked()
{
    paleta = 9;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_18_clicked()
{
    paleta = 10;
    convertir_color_falso(nfoto, paleta);
}


void ColorFalso::on_radioButton_28_clicked()
{
    paleta = 11;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_15_clicked()
{
    paleta = 12;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_23_clicked()
{
    paleta = 13;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_31_clicked()
{
    paleta = 14;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_30_clicked()
{
    paleta = 15;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_27_clicked()
{
    paleta = 16;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_29_clicked()
{
    paleta = 17;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_22_clicked()
{
    paleta = 18;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_26_clicked()
{
    paleta = 19;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_24_clicked()
{
    paleta = 20;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_radioButton_25_clicked()
{
    paleta = 21;
    convertir_color_falso(nfoto, paleta);
}

void ColorFalso::on_ColorFalso_accepted()
{
    convertir_color_falso(nfoto, paleta, true);
    destroyWindow("Color falso");

}

void ColorFalso::on_ColorFalso_rejected()
{
    destroyWindow("Color falso");

}
