#include "infoimagen.h"
#include "ui_infoimagen.h"
#include "imagenes.h"

int corr[MAX_VENTANAS];
int NUM_PROP = 3;
Infoimagen::Infoimagen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Infoimagen)
{
    ui->setupUi(this);
    int numImg = 0;
    for (int i=0; i < MAX_VENTANAS; i++)
    {
        if (foto[i].usada)
        {
            ui->listWidget->addItem(QString::fromStdString(foto[i].nombre));
            corr[numImg++] = i;
        }
    }
}

Infoimagen::~Infoimagen()
{
    delete ui;
}


void Infoimagen::on_listWidget_currentRowChanged(int currentRow)
{
    ui->listWidget_2->clear();
    String props[3];
    propiedades(props,corr[currentRow]);

    for (int i = 0;i < NUM_PROP ;i++) {
        ui->listWidget_2->addItem(QString::fromStdString(props[i]));
    }
}
