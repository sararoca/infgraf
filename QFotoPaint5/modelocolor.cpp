#include "modelocolor.h"
#include "ui_modelocolor.h"
#include "imagenes.h"

ModeloColor::ModeloColor(int numfoto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeloColor)
{
    ui->setupUi(this);
    nfoto = numfoto;
}

ModeloColor::~ModeloColor()
{
    delete ui;
}

void ModeloColor::on_ModeloColor_accepted()
{
    QString cad= ui->comboBox->currentText();

    if (cad=="RGB to GRAY")
    {
        code = COLOR_RGB2GRAY;
    }
    else if(cad=="RGB to XYZ")
    {
        code = COLOR_RGB2XYZ;
    }
    else if(cad=="RGB to YCrCb")
    {
        code = COLOR_RGB2YCrCb;
    }
    else if(cad=="RGB to HSV")
    {
        code = COLOR_RGB2HSV;
    }
    else if(cad=="RGB to Lab")
    {
        code = COLOR_RGB2Lab;
    }
    else if(cad=="RGB to Luv")
    {
        code = COLOR_RGB2Luv;
    }
    else if(cad=="RGB to HLS")
    {
        code = COLOR_RGB2HLS;
    }
    else if(cad=="RGB to YUV")
    {
        code = COLOR_RGB2YUV;
    }
    else if (cad=="BGR to GRAY")
    {
        code = COLOR_BGR2GRAY;
    }
    else if(cad=="BGR to XYZ")
    {
        code = COLOR_BGR2XYZ;
    }
    else if(cad=="BGR to YCrCb")
    {
        code = COLOR_BGR2YCrCb;
    }
    else if(cad=="BGR to HSV")
    {
        code = COLOR_BGR2HSV;
    }
    else if(cad=="BGR to Lab")
    {
        code = COLOR_BGR2Lab;
    }
    else if(cad=="BGR to Luv")
    {
        code = COLOR_BGR2Luv;
    }
    else if(cad=="BGR to HLS")
    {
        code = COLOR_BGR2HLS;
    }
    else if(cad=="BGR to YUV")
    {
        code = COLOR_BGR2YUV;
    }
    else if(cad=="GRAY to RGB")
    {
        code = COLOR_GRAY2RGB;
    }
    else if(cad=="GRAY to BGR")
    {
        code = COLOR_GRAY2BGR;
    }
    else if(cad=="XYZ to RGB")
    {
         code = COLOR_XYZ2RGB;
    }
    else if(cad=="XYZ to BGR")
    {
        code = COLOR_XYZ2BGR;
    }
    else if(cad=="YCrCb to RGB")
    {
         code = COLOR_YCrCb2RGB;
    }
    else if(cad=="YCrCb to BGR")
    {
        code = COLOR_YCrCb2BGR;
    }
    else if(cad=="HSV to RGB")
    {
         code = COLOR_HSV2RGB;
    }
    else if(cad=="HSV to BGR")
    {
        code = COLOR_HSV2BGR;
    }
    else if(cad=="Lab to RGB")
    {
         code = COLOR_Lab2RGB;
    }
    else if(cad=="Lab to BGR")
    {
        code = COLOR_Lab2BGR;
    }
    else if(cad=="Luv to RGB")
    {
         code = COLOR_Luv2RGB;
    }
    else if(cad=="Luv to BGR")
    {
        code = COLOR_Luv2BGR;
    }
    else if(cad=="HLS to RGB")
    {
         code = COLOR_HLS2RGB;
    }
    else if(cad=="HLS to BGR")
    {
        code = COLOR_HLS2BGR;
    }
    else if(cad=="YUV to RGB")
    {
         code = COLOR_YUV2RGB;
    }
    else if(cad=="YUV to BGR")
    {
         code = COLOR_YUV2BGR;
    }

    ver_modelos_color(nfoto, code);
}
