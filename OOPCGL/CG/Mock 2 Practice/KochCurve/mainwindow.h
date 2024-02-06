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

    void line(float ax, float ay, float bx, float by);
public slots:
    void koch(float X1, float Y1, float X5, float Y5, int level);
    void on_Btn_Draw_clicked();
private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
