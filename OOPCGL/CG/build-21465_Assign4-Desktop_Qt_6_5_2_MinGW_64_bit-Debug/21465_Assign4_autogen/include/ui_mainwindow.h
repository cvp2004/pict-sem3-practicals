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
    QTextEdit *Txt_y1;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *Txt_x1;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *Btn_Draw;
    QTextEdit *Txt_x3;
    QLabel *label_10;
    QTextEdit *Txt_y3;
    QLabel *label_11;
    QTextEdit *Txt_y2;
    QTextEdit *Txt_x2;
    QTextEdit *Txt_Sy;
    QLabel *label_13;
    QPushButton *Btn_Translate;
    QLabel *label_15;
    QTextEdit *Txt_Angle;
    QTextEdit *Txt_Sx;
    QTextEdit *Txt_tx;
    QLabel *label_16;
    QPushButton *Btn_Rotate;
    QPushButton *Btn_Scale;
    QLabel *label_17;
    QTextEdit *Txt_ty;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1066, 555);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Img = new QLabel(centralwidget);
        Img->setObjectName("Img");
        Img->setGeometry(QRect(0, 0, 500, 500));
        Txt_y1 = new QTextEdit(centralwidget);
        Txt_y1->setObjectName("Txt_y1");
        Txt_y1->setGeometry(QRect(620, 90, 131, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(540, 90, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(540, 50, 49, 16));
        Txt_x1 = new QTextEdit(centralwidget);
        Txt_x1->setObjectName("Txt_x1");
        Txt_x1->setGeometry(QRect(620, 50, 131, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(540, 140, 49, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(540, 180, 49, 16));
        Btn_Draw = new QPushButton(centralwidget);
        Btn_Draw->setObjectName("Btn_Draw");
        Btn_Draw->setGeometry(QRect(540, 310, 211, 31));
        Txt_x3 = new QTextEdit(centralwidget);
        Txt_x3->setObjectName("Txt_x3");
        Txt_x3->setGeometry(QRect(620, 230, 131, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(540, 270, 49, 16));
        Txt_y3 = new QTextEdit(centralwidget);
        Txt_y3->setObjectName("Txt_y3");
        Txt_y3->setGeometry(QRect(620, 270, 131, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(540, 230, 49, 16));
        Txt_y2 = new QTextEdit(centralwidget);
        Txt_y2->setObjectName("Txt_y2");
        Txt_y2->setGeometry(QRect(620, 180, 131, 21));
        Txt_x2 = new QTextEdit(centralwidget);
        Txt_x2->setObjectName("Txt_x2");
        Txt_x2->setGeometry(QRect(620, 140, 131, 21));
        Txt_Sy = new QTextEdit(centralwidget);
        Txt_Sy->setObjectName("Txt_Sy");
        Txt_Sy->setGeometry(QRect(860, 290, 131, 21));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(780, 250, 49, 16));
        Btn_Translate = new QPushButton(centralwidget);
        Btn_Translate->setObjectName("Btn_Translate");
        Btn_Translate->setGeometry(QRect(780, 110, 211, 31));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(780, 290, 49, 16));
        Txt_Angle = new QTextEdit(centralwidget);
        Txt_Angle->setObjectName("Txt_Angle");
        Txt_Angle->setGeometry(QRect(860, 160, 131, 21));
        Txt_Sx = new QTextEdit(centralwidget);
        Txt_Sx->setObjectName("Txt_Sx");
        Txt_Sx->setGeometry(QRect(860, 250, 131, 21));
        Txt_tx = new QTextEdit(centralwidget);
        Txt_tx->setObjectName("Txt_tx");
        Txt_tx->setGeometry(QRect(860, 30, 131, 21));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(780, 70, 49, 16));
        Btn_Rotate = new QPushButton(centralwidget);
        Btn_Rotate->setObjectName("Btn_Rotate");
        Btn_Rotate->setGeometry(QRect(780, 200, 211, 31));
        Btn_Scale = new QPushButton(centralwidget);
        Btn_Scale->setObjectName("Btn_Scale");
        Btn_Scale->setGeometry(QRect(780, 330, 211, 31));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(780, 160, 49, 16));
        Txt_ty = new QTextEdit(centralwidget);
        Txt_ty->setObjectName("Txt_ty");
        Txt_ty->setGeometry(QRect(860, 70, 131, 21));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(780, 30, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1066, 21));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "Y 1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X 1", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X 2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Y 2", nullptr));
        Btn_Draw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y 3", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X 3", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Sx", nullptr));
        Btn_Translate->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Sy", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Ty", nullptr));
        Btn_Rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        Btn_Scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Tx", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
