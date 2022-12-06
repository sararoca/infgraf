#ifndef COLORFALSO_H
#define COLORFALSO_H

#include <QDialog>

namespace Ui {
class ColorFalso;
}

class ColorFalso : public QDialog
{
    Q_OBJECT

public:
    explicit ColorFalso(int numfoto, QWidget *parent = nullptr);
    ~ColorFalso();

private slots:

    void on_radioButton_19_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_16_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_12_clicked();

    void on_radioButton_20_clicked();

    void on_radioButton_13_clicked();

    void on_radioButton_14_clicked();

    void on_radioButton_17_clicked();

    void on_radioButton_18_clicked();

    void on_radioButton_28_clicked();

    void on_radioButton_15_clicked();

    void on_radioButton_23_clicked();

    void on_radioButton_31_clicked();

    void on_radioButton_30_clicked();

    void on_radioButton_27_clicked();

    void on_radioButton_29_clicked();

    void on_radioButton_22_clicked();

    void on_radioButton_26_clicked();

    void on_radioButton_24_clicked();

    void on_radioButton_25_clicked();

    void on_ColorFalso_accepted();

    void on_ColorFalso_rejected();

private:
    Ui::ColorFalso *ui;
    int nfoto;
    int paleta;
};

#endif // COLORFALSO_H
