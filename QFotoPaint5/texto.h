#ifndef TEXTO_H
#define TEXTO_H

#include <QDialog>

namespace Ui {
class Texto;
}

class Texto : public QDialog
{
    Q_OBJECT

public:
    explicit Texto(int numfoto, QWidget *parent = nullptr);
    ~Texto();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_plainTextEdit_textChanged();

    void on_Texto_accepted();

    void on_Texto_rejected();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::Texto *ui;
    int nfoto;
    QString texto;
    int posX;
    int posY;
    int fuente;
    int tam;
    QColor color;

};

#endif // TEXTO_H
