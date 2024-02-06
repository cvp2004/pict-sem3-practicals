#include "mainwindow.h"
#include "iostream"
#include "./ui_mainwindow.h"
using namespace std;

QImage img1(400, 400, QImage::Format_RGB888);
QImage img2(400, 400, QImage::Format_RGB888);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    line1(200, 0, 200, 400, qRgb(255, 255, 255));
    line1(0, 200, 400, 200, qRgb(255, 255, 255));
    line2(200, 0, 200, 400, qRgb(255, 255, 255));
    line2(0, 200, 400, 200, qRgb(255, 255, 255));

}

MainWindow::~MainWindow()
{
    delete ui;
}

float X1, Y1,
      X2, Y2,
      X3, Y3;

void clear1()
{
    for(int i = 1; i <= 400; i++)
        for(int j = 1; j <= 400; j++)
            img1.setPixel(i, j, qRgb(0,0,0));
}

void clear2()
{
    for(int i = 1; i <= 400; i++)
        for(int j = 1; j <= 400; j++)
            img2.setPixel(i, j, qRgb(0,0,0));
}

void MainWindow::line1(float ax, float ay, float bx, float by, QRgb clr)
{
    int dx = bx - ax;
    int dy = by - ay;

    float steps = 0;

    abs(dx) > abs(dy) ? steps = abs(dx) : steps = abs(dy);

    float x_inc = dx / steps;
    float y_inc = dy / steps;

    float x = ax;
    float y = ay;

    int i = 0;

    while(i < steps)
    {
        img1.setPixel(x, y, clr);

        x = x + x_inc;
        y = y + y_inc;

        i++;
    }
}

void MainWindow::line2(float ax, float ay, float bx, float by, QRgb clr)
{
    int dx = bx - ax;
    int dy = by - ay;

    float steps = 0;

    abs(dx) > abs(dy) ? steps = abs(dx) : steps = abs(dy);

    float x_inc = dx / steps;
    float y_inc = dy / steps;

    float x = ax;
    float y = ay;

    int i = 0;

    while(i < steps)
    {
        img2.setPixel(x, y, clr);

        x = x + x_inc;
        y = y + y_inc;

        i++;
    }

}

void MainWindow::on_Btn_Draw_clicked()
{
    X1 = ui->Txt_X1->toPlainText().toFloat();
    Y1 = ui->Txt_Y1->toPlainText().toFloat();
    X2 = ui->Txt_X2->toPlainText().toFloat();
    Y2 = ui->Txt_Y2->toPlainText().toFloat();
    X3 = ui->Txt_X3->toPlainText().toFloat();
    Y3 = ui->Txt_Y3->toPlainText().toFloat();


    X1 = X1 + 200;
    Y1 = 200 - Y1;
    X2 = X2 + 200;
    Y2 = 200 - Y2;
    X3 = X3 + 200;
    Y3 = 200 - Y3;

    this->line1(X1, Y1, X2, Y2, qRgb(255, 255, 0));
    this->line1(X2, Y2, X3, Y3, qRgb(255, 255, 0));
    this->line1(X1, Y1, X3, Y3, qRgb(255, 255, 0));

    ui->Img1->setPixmap(QPixmap::fromImage(img1));

}

float DX1, DY1,
      DX2, DY2,
      DX3, DY3;

void MainWindow::on_Btn_Translate_clicked()
{
    float TX = ui->Txt_Tx->toPlainText().toFloat();
    float TY = ui->Txt_Ty->toPlainText().toFloat();

    TY *= -1;

    DX1 = X1 + TX;
    DY1 = Y1 + TY;
    DX2 = X2 + TX;
    DY2 = Y2 + TY;
    DX3 = X3 + TX;
    DY3 = Y3 + TY;

    this->line2(DX1, DY1, DX2, DY2, qRgb(0, 255, 255));
    this->line2(DX2, DY2, DX3, DY3, qRgb(0, 255, 255));
    this->line2(DX1, DY1, DX3, DY3, qRgb(0, 255, 255));

    ui->Img2->setPixmap(QPixmap::fromImage(img2));
}

void MainWindow::on_Btn_Rotate_clicked()
{
    float Angle = ui->Txt_Theta->toPlainText().toFloat();

    Angle = Angle * 3.14 / 180;

    X1 = X1 - 200;
    Y1 = 200 - Y1;
    X2 = X2 - 200;
    Y2 = 200 - Y2;
    X3 = X3 - 200;
    Y3 = 200 - Y3;

    DX1 = X1*cos(Angle) - Y1*sin(Angle);
    DY1 = X1*sin(Angle) + Y1*cos(Angle);
    DX2 = X2*cos(Angle) - Y2*sin(Angle);
    DY2 = X2*sin(Angle) + Y2*cos(Angle);
    DX3 = X3*cos(Angle) - Y3*sin(Angle);
    DY3 = X3*sin(Angle) + Y3*cos(Angle);

    DX1 = DX1 + 200;
    DY1 = 200 - DY1;
    DX2 = DX2 + 200;
    DY2 = 200 - DY2;
    DX3 = DX3 + 200;
    DY3 = 200 - DY3;

    cout << "DX1 = " << DX1 << " DY1 = "<< DY1 << endl;
    cout << "DX2 = " << DX2 << " DY2 = "<< DY2 << endl;
    cout << "DX3 = " << DX3 << " DY3 = "<< DY3 << endl;

    this->line2(DX1, DY1, DX2, DY2, qRgb(0, 255, 255));
    this->line2(DX2, DY2, DX3, DY3, qRgb(0, 255, 255));
    this->line2(DX1, DY1, DX3, DY3, qRgb(0, 255, 255));

    ui->Img2->setPixmap(QPixmap::fromImage(img2));
}

void MainWindow::on_Btn_Scale_clicked()
{
    float SX = ui->Txt_Sx->toPlainText().toFloat();
    float SY = ui->Txt_Sy->toPlainText().toFloat();

    X1 = X1 - 200;
    Y1 = 200 - Y1;
    X2 = X2 - 200;
    Y2 = 200 - Y2;
    X3 = X3 - 200;
    Y3 = 200 - Y3;

    DX1 = X1*SX;
    DY1 = Y1*SY;
    DX2 = X2*SX;
    DY2 = Y2*SY;
    DX3 = X3*SX;
    DY3 = Y3*SY;

    DX1 = DX1 + 200;
    DY1 = 200 - DY1;
    DX2 = DX2 + 200;
    DY2 = 200 - DY2;
    DX3 = DX3 + 200;
    DY3 = 200 - DY3;

    this->line2(DX1, DY1, DX2, DY2, qRgb(0, 255, 255));
    this->line2(DX2, DY2, DX3, DY3, qRgb(0, 255, 255));
    this->line2(DX1, DY1, DX3, DY3, qRgb(0, 255, 255));

    ui->Img2->setPixmap(QPixmap::fromImage(img2));
}
