/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1077, 811);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(810, 270, 250, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 10, 50, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_rdt60.png);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_qdt60.png);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(131, 11, 50, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_ndt60.png);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(71, 11, 50, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_bdt60.png);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
