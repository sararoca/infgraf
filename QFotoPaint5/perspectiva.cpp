#include "perspectiva.h"
#include "ui_perspectiva.h"

Perspectiva::Perspectiva(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Perspectiva)
{
    ui->setupUi(this);
}

Perspectiva::~Perspectiva()
{
    delete ui;
}
