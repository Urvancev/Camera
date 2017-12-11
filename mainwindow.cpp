#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMultimedia/QCamera"
#include "QtMultimedia/QCameraViewfinderSettings"
#include "QCameraViewfinder"
#include "QImage"
//#include "QCameraCaptureStillImage"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QCamera * camera = new QCamera();
    //camera->set
    QCamera* cap = new QCamera();
    //cap.setCaptureMode(QCamera::CaptureStillImage);
    //QImage img = cap.CaptureStillImage;
    QCameraViewfinder * viewfinder = new QCameraViewfinder(ui->graphicsView);
    viewfinder->resize(800,600);
    //viewfinder->setFixedSize(1920,1080);
    //viewfinder->
    ui->graphicsView->setFixedSize(800,600);
    viewfinder->setFullScreen(false);
    //viewfinder->show();

    //camera->setViewfinder(viewfinder);
    cap->setViewfinder(viewfinder);

    cap->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
