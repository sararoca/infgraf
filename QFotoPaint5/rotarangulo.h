#ifndef ROTARANGULO_H
#define ROTARANGULO_H

#include <QDialog>

namespace Ui {
class Rotarangulo;
}

class Rotarangulo : public QDialog
{
    Q_OBJECT

public:
    explicit Rotarangulo(int numfoto, QWidget *parent = nullptr);
    ~Rotarangulo();

private slots:
    void on_dial_valueChanged(int value);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Rotarangulo *ui;
    int nfoto;
    int angulo;
    double escala;
    int modo;
};

#endif // ROTARANGULO_H
