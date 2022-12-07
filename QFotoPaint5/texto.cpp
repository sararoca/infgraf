#include "texto.h"
#include "ui_texto.h"
#include "imagenes.h"
#include <QColorDialog>

Texto::Texto(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Texto)
{
    ui->setupUi(this);
    nfoto = numfoto;
    texto = "";
    posX = 50;
    posY = 50;
    fuente = 0;
    tam = 30;
    color = QColor(255,255,255);
    set_callback_foto(nfoto, false);
}

Texto::~Texto()
{
    set_callback_foto(nfoto, true);
    delete ui;
}

void Texto::on_plainTextEdit_textChanged()
{
    texto = ui->plainTextEdit->toPlainText();
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);

}

void Texto::on_spinBox_valueChanged(int arg1)
{
    tam = arg1;
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);
}

void Texto::on_spinBox_2_valueChanged(int arg1)
{
    if (arg1 >= foto[nfoto].img.cols)
    {
       posX = foto[nfoto].img.cols - (texto.length()*10);
       ui->spinBox_2->setValue(posX);
    }
    else
        posX = arg1;
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);

}

void Texto::on_spinBox_4_valueChanged(int arg1)
{
    if (arg1 >= foto[nfoto].img.rows)
    {
       posY = foto[nfoto].img.rows - texto.size();
       ui->spinBox_4->setValue(posY);
    }
    else if (arg1 <= tam)
    {
        posY = tam;
        ui->spinBox_4->setValue(posY);
    }
    else
        posY = arg1;
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);
}

void Texto::on_pushButton_clicked()
{
    color= QColorDialog::getColor();
    if (color.isValid()) {
        QString estilo= "background-color: rgb(";
        estilo+= QString::number(color.red())+",";
        estilo+= QString::number(color.green())+",";
        estilo+= QString::number(color.blue())+")";
        ui->pushButton->setStyleSheet(estilo);
    }
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);
}

void Texto::on_Texto_accepted()
{

    ver_texto(nfoto, texto, posX, posY, fuente, tam, color, true);
}

void Texto::on_Texto_rejected()
{
    mostrar(nfoto);
}

void Texto::on_comboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "FONT_HERSHEY_SIMPLEX")
    {
        fuente = 0;
    }
    else if (arg1 == "FONT_HERSHEY_PLAIN")
    {
        fuente = 1;
    }
    else if (arg1 == "FONT_HERSHEY_DUPLEX")
    {
        fuente = 2;
    }
    else if (arg1 == "FONT_HERSHEY_COMPLEX")
    {
        fuente = 3;
    }
    else if (arg1 == "FONT_HERSHEY_TRIPLEX")
    {
        fuente = 4;
    }
    else if (arg1 == "FONT_HERSHEY_COMPLEX_SMALL ")
    {
        fuente = 5;
    }
    else if (arg1 == "FONT_HERSHEY_SCRIPT_SIMPLEX")
    {
        fuente = 6;
    }
    else if (arg1 == "FONT_HERSHEY_SCRIPT_COMPLEX")
    {
        fuente = 7;
    }
    else if (arg1 == "FONT_ITALIC")
    {
        fuente = 16;
    }
    ver_texto(nfoto, texto, posX, posY, fuente, tam, color);
}
