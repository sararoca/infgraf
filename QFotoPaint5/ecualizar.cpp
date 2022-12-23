#include "ecualizar.h"
#include "ui_ecualizar.h"
#include "imagenes.h"

Ecualizar::Ecualizar(int numfot,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ecualizar)
{
    ui->setupUi(this);
    nfoto= numfot;
    modo = 1;
    ecualizar_histograma_por_canales(nfoto);
    set_callback_foto(nfoto, false);
}

Ecualizar::~Ecualizar()
{
    set_callback_foto(nfoto, true   );
    delete ui;
}

void Ecualizar::on_radioButton_clicked()
{
    modo = 1;
    ecualizar_histograma_por_canales(nfoto);
}

void Ecualizar::on_radioButton_2_clicked()
{
    modo= 2;
    ecualizar_histograma(nfoto);
}

void Ecualizar::on_Ecualizar_accepted()
{
    if (modo==1) {
        ecualizar_histograma_por_canales(nfoto, true);
    }else {
        ecualizar_histograma(nfoto,true);
    }
    destroyWindow("Ecualizar histograma");
}

void Ecualizar::on_Ecualizar_rejected()
{
    destroyWindow("Ecualizar histograma");
}
