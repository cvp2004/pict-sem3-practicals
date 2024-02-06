/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Img;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *txt_x1;
    QTextEdit *txt_y1;
    QTextEdit *txt_y2;
    QPushButton *Btn_Line;
    QTextEdit *txt_x2;
    QPushButton *Btn_Circle;
    QPushButton *Btn_Rectangle;
    QPushButton *Btn_Rhombus;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Img = new QLabel(centralwidget);
        Img->setObjectName("Img");
        Img->setGeometry(QRect(0, 0, 500, 500));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 70, 21, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 150, 21, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(550, 110, 21, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 190, 21, 16));
        txt_x1 = new QTextEdit(centralwidget);
        txt_x1->setObjectName("txt_x1");
        txt_x1->setGeometry(QRect(590, 60, 125, 30));
        txt_y1 = new QTextEdit(centralwidget);
        txt_y1->setObjectName("txt_y1");
        txt_y1->setGeometry(QRect(590, 100, 125, 30));
        txt_y2 = new QTextEdit(centralwidget);
        txt_y2->setObjectName("txt_y2");
        txt_y2->setGeometry(QRect(590, 180, 125, 30));
        Btn_Line = new QPushButton(centralwidget);
        Btn_Line->setObjectName("Btn_Line");
        Btn_Line->setGeometry(QRect(590, 220, 121, 24));
        txt_x2 = new QTextEdit(centralwidget);
        txt_x2->setObjectName("txt_x2");
        txt_x2->setGeometry(QRect(590, 140, 125, 30));
        Btn_Circle = new QPushButton(centralwidget);
        Btn_Circle->setObjectName("Btn_Circle");
        Btn_Circle->setGeometry(QRect(590, 260, 121, 24));
        Btn_Rectangle = new QPushButton(centralwidget);
        Btn_Rectangle->setObjectName("Btn_Rectangle");
        Btn_Rectangle->setGeometry(QRect(590, 340, 121, 24));
        Btn_Rhombus = new QPushButton(centralwidget);
        Btn_Rhombus->setObjectName("Btn_Rhombus");
        Btn_Rhombus->setGeometry(QRect(590, 300, 121, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 380, 121, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Img->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Y1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y2", nullptr));
        Btn_Line->setText(QCoreApplication::translate("MainWindow", "LINE", nullptr));
        Btn_Circle->setText(QCoreApplication::translate("MainWindow", "CIRCLE", nullptr));
        Btn_Rectangle->setText(QCoreApplication::translate("MainWindow", "RECTANGLE", nullptr));
        Btn_Rhombus->setText(QCoreApplication::translate("MainWindow", "RHOMBUS", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
