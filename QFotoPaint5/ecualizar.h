#ifndef ECUALIZAR_H
#define ECUALIZAR_H

#include <QDialog>

namespace Ui {
class Ecualizar;
}

class Ecualizar : public QDialog
{
    Q_OBJECT

public:
    explicit Ecualizar(int numfot,QWidget *parent = nullptr);
    ~Ecualizar();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_Ecualizar_accepted();

    void on_Ecualizar_rejected();

private:
    Ui::Ecualizar *ui;
    int nfoto;
    int modo;
};

#endif // ECUALIZAR_H
