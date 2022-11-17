#ifndef PERSPECTIVA_H
#define PERSPECTIVA_H

#include <QDialog>

namespace Ui {
class Perspectiva;
}

class Perspectiva : public QDialog
{
    Q_OBJECT

public:
    explicit Perspectiva(QWidget *parent = nullptr);
    ~Perspectiva();

private:
    Ui::Perspectiva *ui;
};

#endif // PERSPECTIVA_H
