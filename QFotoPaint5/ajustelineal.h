#ifndef AJUSTELINEAL_H
#define AJUSTELINEAL_H

#include <QDialog>

namespace Ui {
class ajustelineal;
}

class ajustelineal : public QDialog
{
    Q_OBJECT

public:
    explicit ajustelineal(QWidget *parent = nullptr);
    ~ajustelineal();

private:
    Ui::ajustelineal *ui;
};

#endif // AJUSTELINEAL_H
