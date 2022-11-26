#ifndef INFOIMAGEN_H
#define INFOIMAGEN_H

#include <QDialog>

namespace Ui {
class Infoimagen;
}

class Infoimagen : public QDialog
{
    Q_OBJECT

public:
    explicit Infoimagen(QWidget *parent = nullptr);
    ~Infoimagen();

private slots:
    void on_listWidget_currentRowChanged(int currentRow);

private:
    Ui::Infoimagen *ui;
};

#endif // INFOIMAGEN_H
