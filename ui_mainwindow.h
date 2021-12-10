/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trilho7;
    QLabel *label_trilho5;
    QLabel *label_trilho6;
    QLabel *label_trem2;
    QLabel *label_trilho9;
    QLabel *label_trilho10;
    QLabel *label_trilho8;
    QLabel *label_trilho12;
    QLabel *label_trilho13;
    QLabel *label_trilho11;
    QLabel *label_trilho14;
    QLabel *label_trilho15;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QSlider *horizontalSlider_trem_2;
    QSlider *horizontalSlider_trem_4;
    QSlider *horizontalSlider_trem_1;
    QSlider *horizontalSlider_trem_3;
    QSlider *horizontalSlider_trem_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1005, 666);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(200, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: blue}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(80, 30, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QString::fromUtf8("label_trilho2"));
        label_trilho2->setGeometry(QRect(80, 150, 250, 17));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(330, 30, 21, 137));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 51, 51, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(229, 25, 25, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(102, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(136, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(229, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(204, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        label_trilho3->setPalette(palette);
        label_trilho3->setAutoFillBackground(false);
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(60, 30, 21, 137));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 390, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 390, 98, 27));
        label_trilho7 = new QLabel(centralWidget);
        label_trilho7->setObjectName(QString::fromUtf8("label_trilho7"));
        label_trilho7->setGeometry(QRect(600, 30, 21, 137));
        label_trilho7->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho5 = new QLabel(centralWidget);
        label_trilho5->setObjectName(QString::fromUtf8("label_trilho5"));
        label_trilho5->setGeometry(QRect(350, 30, 250, 17));
        label_trilho5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho6 = new QLabel(centralWidget);
        label_trilho6->setObjectName(QString::fromUtf8("label_trilho6"));
        label_trilho6->setGeometry(QRect(350, 150, 250, 17));
        label_trilho6->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(460, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho9 = new QLabel(centralWidget);
        label_trilho9->setObjectName(QString::fromUtf8("label_trilho9"));
        label_trilho9->setGeometry(QRect(620, 150, 250, 17));
        label_trilho9->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho10 = new QLabel(centralWidget);
        label_trilho10->setObjectName(QString::fromUtf8("label_trilho10"));
        label_trilho10->setGeometry(QRect(870, 30, 21, 137));
        label_trilho10->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho8 = new QLabel(centralWidget);
        label_trilho8->setObjectName(QString::fromUtf8("label_trilho8"));
        label_trilho8->setGeometry(QRect(620, 30, 250, 17));
        label_trilho8->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho12 = new QLabel(centralWidget);
        label_trilho12->setObjectName(QString::fromUtf8("label_trilho12"));
        label_trilho12->setGeometry(QRect(440, 166, 21, 131));
        label_trilho12->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho13 = new QLabel(centralWidget);
        label_trilho13->setObjectName(QString::fromUtf8("label_trilho13"));
        label_trilho13->setGeometry(QRect(170, 166, 21, 131));
        label_trilho13->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho11 = new QLabel(centralWidget);
        label_trilho11->setObjectName(QString::fromUtf8("label_trilho11"));
        label_trilho11->setGeometry(QRect(190, 280, 250, 17));
        label_trilho11->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho14 = new QLabel(centralWidget);
        label_trilho14->setObjectName(QString::fromUtf8("label_trilho14"));
        label_trilho14->setGeometry(QRect(460, 280, 250, 17));
        label_trilho14->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho15 = new QLabel(centralWidget);
        label_trilho15->setObjectName(QString::fromUtf8("label_trilho15"));
        label_trilho15->setGeometry(QRect(710, 166, 21, 131));
        label_trilho15->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(730, 150, 21, 16));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: green}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(310, 280, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: purple}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(570, 280, 21, 16));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: orange}"));
        horizontalSlider_trem_2 = new QSlider(centralWidget);
        horizontalSlider_trem_2->setObjectName(QString::fromUtf8("horizontalSlider_trem_2"));
        horizontalSlider_trem_2->setGeometry(QRect(380, 370, 160, 16));
        horizontalSlider_trem_2->setStyleSheet(QString::fromUtf8(".QSlider::handle:horizontal {\n"
"    background: red;\n"
"}"));
        horizontalSlider_trem_2->setMinimum(0);
        horizontalSlider_trem_2->setMaximum(200);
        horizontalSlider_trem_2->setOrientation(Qt::Horizontal);
        horizontalSlider_trem_2->setInvertedAppearance(false);
        horizontalSlider_trem_2->setInvertedControls(false);
        horizontalSlider_trem_4 = new QSlider(centralWidget);
        horizontalSlider_trem_4->setObjectName(QString::fromUtf8("horizontalSlider_trem_4"));
        horizontalSlider_trem_4->setGeometry(QRect(380, 430, 160, 16));
        horizontalSlider_trem_4->setStyleSheet(QString::fromUtf8(".QSlider::handle:horizontal {\n"
"    background: purple;\n"
"}"));
        horizontalSlider_trem_4->setMinimum(0);
        horizontalSlider_trem_4->setMaximum(200);
        horizontalSlider_trem_4->setOrientation(Qt::Horizontal);
        horizontalSlider_trem_4->setInvertedAppearance(false);
        horizontalSlider_trem_4->setInvertedControls(false);
        horizontalSlider_trem_1 = new QSlider(centralWidget);
        horizontalSlider_trem_1->setObjectName(QString::fromUtf8("horizontalSlider_trem_1"));
        horizontalSlider_trem_1->setGeometry(QRect(380, 340, 160, 16));
        horizontalSlider_trem_1->setStyleSheet(QString::fromUtf8(".QSlider::handle:horizontal {\n"
"    background: blue;\n"
"}"));
        horizontalSlider_trem_1->setMinimum(0);
        horizontalSlider_trem_1->setMaximum(200);
        horizontalSlider_trem_1->setValue(0);
        horizontalSlider_trem_1->setOrientation(Qt::Horizontal);
        horizontalSlider_trem_1->setInvertedAppearance(false);
        horizontalSlider_trem_1->setInvertedControls(false);
        horizontalSlider_trem_3 = new QSlider(centralWidget);
        horizontalSlider_trem_3->setObjectName(QString::fromUtf8("horizontalSlider_trem_3"));
        horizontalSlider_trem_3->setGeometry(QRect(380, 400, 160, 16));
        horizontalSlider_trem_3->setStyleSheet(QString::fromUtf8(".QSlider::handle:horizontal {\n"
"    background: green;\n"
"}"));
        horizontalSlider_trem_3->setMinimum(0);
        horizontalSlider_trem_3->setMaximum(200);
        horizontalSlider_trem_3->setOrientation(Qt::Horizontal);
        horizontalSlider_trem_3->setInvertedAppearance(false);
        horizontalSlider_trem_3->setInvertedControls(false);
        horizontalSlider_trem_5 = new QSlider(centralWidget);
        horizontalSlider_trem_5->setObjectName(QString::fromUtf8("horizontalSlider_trem_5"));
        horizontalSlider_trem_5->setGeometry(QRect(380, 460, 160, 16));
        horizontalSlider_trem_5->setStyleSheet(QString::fromUtf8(".QSlider::handle:horizontal {\n"
"    background: orange;\n"
"}"));
        horizontalSlider_trem_5->setMinimum(0);
        horizontalSlider_trem_5->setMaximum(200);
        horizontalSlider_trem_5->setOrientation(Qt::Horizontal);
        horizontalSlider_trem_5->setInvertedAppearance(false);
        horizontalSlider_trem_5->setInvertedControls(false);
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        label_trem1->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_trilho7->raise();
        label_trilho5->raise();
        label_trilho6->raise();
        label_trem2->raise();
        label_trilho9->raise();
        label_trilho10->raise();
        label_trilho8->raise();
        label_trilho12->raise();
        label_trilho13->raise();
        label_trilho11->raise();
        label_trilho14->raise();
        label_trilho15->raise();
        label_trem3->raise();
        label_trem4->raise();
        label_trem5->raise();
        horizontalSlider_trem_2->raise();
        horizontalSlider_trem_4->raise();
        horizontalSlider_trem_1->raise();
        horizontalSlider_trem_3->raise();
        horizontalSlider_trem_5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1005, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", nullptr));
        label_trilho7->setText(QString());
        label_trilho5->setText(QString());
        label_trilho6->setText(QString());
        label_trem2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label_trilho9->setText(QString());
        label_trilho10->setText(QString());
        label_trilho8->setText(QString());
        label_trilho12->setText(QString());
        label_trilho13->setText(QString());
        label_trilho11->setText(QString());
        label_trilho14->setText(QString());
        label_trilho15->setText(QString());
        label_trem3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QApplication::translate("MainWindow", "T5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
