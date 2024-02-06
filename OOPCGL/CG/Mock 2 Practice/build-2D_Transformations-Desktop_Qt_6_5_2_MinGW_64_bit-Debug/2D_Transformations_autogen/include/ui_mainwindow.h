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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Img1;
    QLabel *Img2;
    QPlainTextEdit *Txt_Tx;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *Txt_Ty;
    QPlainTextEdit *Txt_Sy;
    QLabel *label_3;
    QPlainTextEdit *Txt_Sx;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *Txt_Theta;
    QPushButton *Btn_Translate;
    QPushButton *Btn_Rotate;
    QPushButton *Btn_Scale;
    QLabel *label_6;
    QPlainTextEdit *Txt_X3;
    QLabel *label_7;
    QPlainTextEdit *Txt_X1;
    QLabel *label_8;
    QPlainTextEdit *Txt_X2;
    QPlainTextEdit *Txt_Y2;
    QLabel *label_9;
    QLabel *label_10;
    QPlainTextEdit *Txt_Y1;
    QPlainTextEdit *Txt_Y3;
    QLabel *label_11;
    QPushButton *Btn_Draw;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(902, 687);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Img1 = new QLabel(centralwidget);
        Img1->setObjectName("Img1");
        Img1->setGeometry(QRect(0, 0, 400, 400));
        Img1->setFrameShape(QFrame::Box);
        Img2 = new QLabel(centralwidget);
        Img2->setObjectName("Img2");
        Img2->setGeometry(QRect(460, 0, 400, 400));
        Img2->setFrameShape(QFrame::Box);
        Txt_Tx = new QPlainTextEdit(centralwidget);
        Txt_Tx->setObjectName("Txt_Tx");
        Txt_Tx->setGeometry(QRect(140, 500, 121, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 510, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 550, 49, 16));
        Txt_Ty = new QPlainTextEdit(centralwidget);
        Txt_Ty->setObjectName("Txt_Ty");
        Txt_Ty->setGeometry(QRect(140, 540, 121, 31));
        Txt_Sy = new QPlainTextEdit(centralwidget);
        Txt_Sy->setObjectName("Txt_Sy");
        Txt_Sy->setGeometry(QRect(390, 540, 121, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 550, 49, 16));
        Txt_Sx = new QPlainTextEdit(centralwidget);
        Txt_Sx->setObjectName("Txt_Sx");
        Txt_Sx->setGeometry(QRect(390, 500, 121, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 510, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 500, 81, 21));
        Txt_Theta = new QPlainTextEdit(centralwidget);
        Txt_Theta->setObjectName("Txt_Theta");
        Txt_Theta->setGeometry(QRect(640, 500, 121, 31));
        Btn_Translate = new QPushButton(centralwidget);
        Btn_Translate->setObjectName("Btn_Translate");
        Btn_Translate->setGeometry(QRect(140, 580, 121, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        Btn_Translate->setFont(font);
        Btn_Rotate = new QPushButton(centralwidget);
        Btn_Rotate->setObjectName("Btn_Rotate");
        Btn_Rotate->setGeometry(QRect(390, 580, 121, 31));
        Btn_Rotate->setFont(font);
        Btn_Scale = new QPushButton(centralwidget);
        Btn_Scale->setObjectName("Btn_Scale");
        Btn_Scale->setGeometry(QRect(640, 580, 121, 31));
        Btn_Scale->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 430, 49, 16));
        Txt_X3 = new QPlainTextEdit(centralwidget);
        Txt_X3->setObjectName("Txt_X3");
        Txt_X3->setGeometry(QRect(640, 420, 121, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(580, 430, 49, 16));
        Txt_X1 = new QPlainTextEdit(centralwidget);
        Txt_X1->setObjectName("Txt_X1");
        Txt_X1->setGeometry(QRect(140, 420, 121, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(330, 430, 49, 16));
        Txt_X2 = new QPlainTextEdit(centralwidget);
        Txt_X2->setObjectName("Txt_X2");
        Txt_X2->setGeometry(QRect(390, 420, 121, 31));
        Txt_Y2 = new QPlainTextEdit(centralwidget);
        Txt_Y2->setObjectName("Txt_Y2");
        Txt_Y2->setGeometry(QRect(390, 460, 121, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(580, 470, 49, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(330, 470, 49, 16));
        Txt_Y1 = new QPlainTextEdit(centralwidget);
        Txt_Y1->setObjectName("Txt_Y1");
        Txt_Y1->setGeometry(QRect(140, 460, 121, 31));
        Txt_Y3 = new QPlainTextEdit(centralwidget);
        Txt_Y3->setObjectName("Txt_Y3");
        Txt_Y3->setGeometry(QRect(640, 460, 121, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 470, 49, 16));
        Btn_Draw = new QPushButton(centralwidget);
        Btn_Draw->setObjectName("Btn_Draw");
        Btn_Draw->setGeometry(QRect(640, 540, 121, 31));
        Btn_Draw->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 902, 21));
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
        Img1->setText(QString());
        Img2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Tx", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ty", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sy", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sx", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Rotation Angle", nullptr));
        Btn_Translate->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        Btn_Rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        Btn_Scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "X3", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Y3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Y1", nullptr));
        Btn_Draw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
