#ifndef CAPTURARVIDEO_H
#define CAPTURARVIDEO_H

#include <QDialog>
#include <opencv2/opencv.hpp>
using namespace cv;

namespace Ui {
class CapturarVideo;
}

class CapturarVideo : public QDialog
{
    Q_OBJECT

public:
    explicit CapturarVideo(QString nombre, QWidget *parent = nullptr);
    ~CapturarVideo();
    bool isOpened();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_CapturarVideo_accepted();

    void on_CapturarVideo_rejected();

private:
    Ui::CapturarVideo *ui;
    VideoCapture cap;
};

#endif // CAPTURARVIDEO_H
