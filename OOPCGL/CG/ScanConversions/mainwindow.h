#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void putPixel(int x, int y);

    void dda(float x1, float y1, float x2, float y2);
    void rhombus(float x1, float y1, float x2, float y2);
    void circle(float x1, float y1, float r);
    void rectangle(float x1, float y1, float x2, float y2);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
