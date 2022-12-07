#ifndef MORFOLOGIA_H
#define MORFOLOGIA_H

#include <QDialog>

namespace Ui {
class Morfologia;
}

class Morfologia : public QDialog
{
    Q_OBJECT

public:
    explicit Morfologia(int numfoto, QWidget *parent = nullptr);
    ~Morfologia();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_Morfologia_accepted();

    void on_Morfologia_rejected();

private:
    Ui::Morfologia *ui;
    int nfoto;
    int operacion;
    int itera;
};

#endif // MORFOLOGIA_H
