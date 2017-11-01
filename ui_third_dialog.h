/********************************************************************************
** Form generated from reading UI file 'third_dialog.ui'
**
** Created: Fri Jul 28 17:17:54 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRD_DIALOG_H
#define UI_THIRD_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_third_Dialog
{
public:
    QLabel *label;
    QPushButton *pb4;

    void setupUi(QDialog *third_Dialog)
    {
        if (third_Dialog->objectName().isEmpty())
            third_Dialog->setObjectName(QString::fromUtf8("third_Dialog"));
        third_Dialog->resize(400, 300);
        label = new QLabel(third_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 120, 221, 121));
        pb4 = new QPushButton(third_Dialog);
        pb4->setObjectName(QString::fromUtf8("pb4"));
        pb4->setGeometry(QRect(260, 260, 80, 23));

        retranslateUi(third_Dialog);

        QMetaObject::connectSlotsByName(third_Dialog);
    } // setupUi

    void retranslateUi(QDialog *third_Dialog)
    {
        third_Dialog->setWindowTitle(QApplication::translate("third_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("third_Dialog", "i am in third dialog box ", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("third_Dialog", "pb4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class third_Dialog: public Ui_third_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRD_DIALOG_H
