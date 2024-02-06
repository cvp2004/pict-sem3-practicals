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

    void line2(float ax, float ay, float bx, float by);
    void line1(float ax, float ay, float bx, float by);
    void line2(float ax, float ay, float bx, float by, QRgb clr);
    void line1(float ax, float ay, float bx, float by, QRgb clr);
private slots:
    void on_Btn_Draw_clicked();

    void on_Btn_Translate_clicked();

    void on_Btn_Rotate_clicked();

    void on_Btn_Scale_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
