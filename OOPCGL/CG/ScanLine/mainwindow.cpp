#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMouseEvent"
#include "QImage"

QImage img(500, 500, QImage::Format_RGB888)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void mousePressEvent(QMouseEvent *ev)
{
    int x = ev->pos().x();
    int y = ev->pos().y();


}
