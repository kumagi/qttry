/********************************************************************************
** Form generated from reading UI file 'one_service.ui'
**
** Created: Tue Dec 21 07:42:52 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONE_SERVICE_H
#define UI_ONE_SERVICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_one_service
{
public:

    void setupUi(QWidget *one_service)
    {
        if (one_service->objectName().isEmpty())
            one_service->setObjectName(QString::fromUtf8("one_service"));
        one_service->resize(600, 40);

        retranslateUi(one_service);

        QMetaObject::connectSlotsByName(one_service);
    } // setupUi

    void retranslateUi(QWidget *one_service)
    {
        one_service->setWindowTitle(QApplication::translate("one_service", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class one_service: public Ui_one_service {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONE_SERVICE_H
