/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(530, 300);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 110, 100, 100));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_qdt60.png);"));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 110, 100, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_bdt60.png);"));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 110, 100, 100));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_ndt60.png);"));
        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 110, 100, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Chess_rdt60.png);"));
        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 230, 100, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
