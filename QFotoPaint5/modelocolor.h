#ifndef MODELOCOLOR_H
#define MODELOCOLOR_H

#include <QDialog>

namespace Ui {
class ModeloColor;
}

class ModeloColor : public QDialog
{
    Q_OBJECT

public:
    explicit ModeloColor(int numfoto, QWidget *parent = nullptr);
    ~ModeloColor();

private slots:
    void on_ModeloColor_accepted();

private:
    Ui::ModeloColor *ui;
    int nfoto;
    int code;
};

#endif // MODELOCOLOR_H
