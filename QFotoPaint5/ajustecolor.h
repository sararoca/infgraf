#ifndef AJUSTECOLOR_H
#define AJUSTECOLOR_H

#include <QDialog>

namespace Ui {
class Ajustecolor;
}

class Ajustecolor : public QDialog
{
    Q_OBJECT

public:
    explicit Ajustecolor(int numfoto, QWidget *parent = nullptr);
    ~Ajustecolor();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_Ajustecolor_accepted();

    void on_Ajustecolor_rejected();

private:
    Ui::Ajustecolor *ui;
    int nfoto;
    double sumaB;
    double multiplicaB;
    double sumaG;
    double multiplicaG;
    double sumaR;
    double multiplicaR;
    void actualizarB();
    void actualizarG();
    void actualizarR();
};

#endif // AJUSTECOLOR_H
