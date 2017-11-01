/********************************************************************************
** Form generated from reading UI file 'sec_dialog.ui'
**
** Created: Fri Jul 28 17:17:54 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_DIALOG_H
#define UI_SEC_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sec_Dialog
{
public:
    QLabel *label;
    QPushButton *seddigpb;

    void setupUi(QDialog *sec_Dialog)
    {
        if (sec_Dialog->objectName().isEmpty())
            sec_Dialog->setObjectName(QString::fromUtf8("sec_Dialog"));
        sec_Dialog->resize(400, 300);
        label = new QLabel(sec_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 100, 191, 121));
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);\n"
"font: italic 20pt \"Sans Serif\";\n"
"background-color: rgb(0, 85, 0);"));
        seddigpb = new QPushButton(sec_Dialog);
        seddigpb->setObjectName(QString::fromUtf8("seddigpb"));
        seddigpb->setGeometry(QRect(280, 240, 80, 23));

        retranslateUi(sec_Dialog);

        QMetaObject::connectSlotsByName(sec_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sec_Dialog)
    {
        sec_Dialog->setWindowTitle(QApplication::translate("sec_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("sec_Dialog", "hello", 0, QApplication::UnicodeUTF8));
        seddigpb->setText(QApplication::translate("sec_Dialog", "secpb", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sec_Dialog: public Ui_sec_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_DIALOG_H
