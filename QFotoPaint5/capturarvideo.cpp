#include "capturarvideo.h"
#include "ui_capturarvideo.h"

CapturarVideo::CapturarVideo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CapturarVideo)
{
    ui->setupUi(this);
}

CapturarVideo::~CapturarVideo()
{
    delete ui;
}
