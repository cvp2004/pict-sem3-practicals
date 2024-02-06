#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "iostream"
using namespace std;
QImage img(600, 600, QImage::Format_RGB888);
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

void MainWindow::line(float ax, float ay, float bx, float by)
{
    float dx = bx - ax;
    float dy = by - ay;

    float steps = 0;

    abs(dx) > abs(dy) ? steps = abs(dx) : steps = abs(dy);

    float x_inc = dx / steps;
    float y_inc = dy / steps;

    int i = 0;

    float x = ax;
    float y = ay;

    while(i < steps)
    {
        img.setPixel(x, y, qRgb(255, 255, 255));

        x = x + x_inc;
        y = y + y_inc;

        i++;
    }

    ui->Img->setPixmap(QPixmap::fromImage(img));
}


void MainWindow::koch(float X1, float Y1, float X5, float Y5, int level)
{
    if(level == 1)
    {
        line(X1, Y1, X5, Y5);
        return;
    }

    float X2 = X1 + (X5 - X1)/3;
    float Y2 = Y1 + (Y5 - Y1)/3;
    float X4 = X1 + 2 * ((X5 - X1)/3);
    float Y4 = Y1 + 2 * ((Y5 - Y1)/3);

    float X3 = (0.5) * (X1 + X5) + sqrt(3) * (Y5 - Y1) / 6;
    float Y3 = (0.5) * (Y1 + Y5) + sqrt(3) * (X1 - X5) / 6;

    cout << "X1 = " << X1 << " Y1 = " << Y1 << endl;
    cout << "X2 = " << X2 << " Y2 = " << Y2 << endl;
    cout << "X3 = " << X3 << " Y3 = " << Y3 << endl;
    cout << "X4 = " << X4 << " Y4 = " << Y4 << endl;
    cout << "X5 = " << X5 << " Y5 = " << Y5 << endl;

    koch(X1, Y1, X2, Y2, level - 1);
    koch(X2, Y2, X3, Y3, level - 1);
    koch(X3, Y3, X4, Y4, level - 1);
    koch(X4, Y4, X5, Y5, level - 1);

}

void MainWindow::on_Btn_Draw_clicked()
{
    float X1 = 0;
    float Y1 = 300;
    float X5 = 600;
    float Y5 = 300;

    int level = ui->Txt_Level->toPlainText().toFloat();

    koch(X1, Y1, X5, Y5, level);
}