#ifndef BAJORELIEVE_H
#define BAJORELIEVE_H

#include <QDialog>

namespace Ui {
class bajorelieve;
}

class bajorelieve : public QDialog
{
    Q_OBJECT

public:
    explicit bajorelieve(int numfot, QWidget *parent = nullptr);
    ~bajorelieve();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_radioButton_4_clicked();

private:
    Ui::bajorelieve *ui;
    int nfoto;
    int fondo;
    double grado;
    double angulo;
};

#endif // BAJORELIEVE_H
