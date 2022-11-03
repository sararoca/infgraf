#ifndef CAPTURARVIDEO_H
#define CAPTURARVIDEO_H

#include <QDialog>

namespace Ui {
class CapturarVideo;
}

class CapturarVideo : public QDialog
{
    Q_OBJECT

public:
    explicit CapturarVideo(QWidget *parent = nullptr);
    ~CapturarVideo();

private:
    Ui::CapturarVideo *ui;
};

#endif // CAPTURARVIDEO_H
