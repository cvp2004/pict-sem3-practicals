#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "iostream"
#include <QMouseEvent>

#include <QImage>
#include <QMouseEvent>
#include <QTime>

QImage img(500, 500, QImage::Format_RGB888);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int x1 = 75, y1 = 100, x2 = 450, y2 = 400;
    dda(x1, y1,
    x2, y2);
    float xmid = (x2+x1)/2;
    float ymid = (y2+y1)/2;
    int l = x2 - x1;
    int b = y2 - y1;
    float r = ( l*b / ( 2 * ( sqrt ( pow(l, 2) + pow(b, 2) ) ) ) );
    circle(xmid, ymid, r);
    rhombus(x1, y1, x2, y2);
    rectangle(x1, y1, x2, y2);
}


void MainWindow::dda(float x1, float y1, float x2, float y2)
{
    float dx, dy, steps, x_inc, y_inc, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) < abs(dy))
        steps = abs(dy);
    else
        steps = abs(dx);

    x_inc = dx/steps;
    y_inc = dy/steps;

    x = x1;
    y = y1;

    int i = 0;

    while(i <= steps)
    {
        putPixel(x, y);
        x = x + x_inc;
        y = y + y_inc;
        i++;
    }

    ui->Lbl->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::circle(float p, float q, float r)
{
    float d = 3-2*(r);

    float x = 0, y = r;

    while(x < y)
    {
        putPixel(x + p, y + q);
        putPixel(y + p, x + q);
        putPixel(-y + p, x + q);
        putPixel(-x + p, y + q);
        putPixel(-x + p, -y + q);
        putPixel(-y + p, -x + q);
        putPixel(y + p, -x + q);
        putPixel(x + p, -y + q);

        if(d < 0)
            d = d + (4 * x) + 6;
        else
        {
            d = d + 4 * (x - y) + 10;
            y = y - 1;
        }
        x = x + 1;
    }

    ui->Lbl->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::rhombus(float x1, float y1, float x2, float y2)
{
    float xmid = (x1 + x2) / 2;
    float ymid = (y1 + y2) / 2;

    dda(xmid, y1, x2, ymid);
    dda(x2, ymid, xmid, y2);
    dda(xmid, y2, x1, ymid);
    dda(x1, ymid, xmid, y1);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::putPixel(int x, int y)
{
    img.setPixel(x, y, qRgb(0,255,0));
}

void MainWindow::rectangle(float x1, float y1, float x2, float y2)
{
    dda(x1, y1, x2, y1);
    dda(x2, y1, x2, y2);
    dda(x2, y2, x1, y2);
    dda(x1, y2, x1, y1);
}
