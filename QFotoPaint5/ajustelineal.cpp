#include "ajustelineal.h"
#include "ui_ajustelineal.h"

ajustelineal::ajustelineal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajustelineal)
{
    ui->setupUi(this);
}

ajustelineal::~ajustelineal()
{
    delete ui;
}
