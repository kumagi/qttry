/********************************************************************************
** Form generated from reading UI file 'select_service_dialog.ui'
**
** Created: Tue Dec 21 08:10:58 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_SERVICE_DIALOG_H
#define UI_SELECT_SERVICE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_select_service_dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *service_list;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListView *listView;

    void setupUi(QDialog *select_service_dialog)
    {
        if (select_service_dialog->objectName().isEmpty())
            select_service_dialog->setObjectName(QString::fromUtf8("select_service_dialog"));
        select_service_dialog->resize(640, 480);
        QFont font;
        font.setPointSize(16);
        select_service_dialog->setFont(font);
        buttonBox = new QDialogButtonBox(select_service_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(select_service_dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 321, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        service_list = new QListWidget(verticalLayoutWidget);
        service_list->setObjectName(QString::fromUtf8("service_list"));

        verticalLayout->addWidget(service_list);

        verticalLayoutWidget_2 = new QWidget(select_service_dialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(340, 10, 291, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listView = new QListView(verticalLayoutWidget_2);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);


        retranslateUi(select_service_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), select_service_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), select_service_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(select_service_dialog);
    } // setupUi

    void retranslateUi(QDialog *select_service_dialog)
    {
        select_service_dialog->setWindowTitle(QApplication::translate("select_service_dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("select_service_dialog", "\343\202\265\343\203\274\343\203\223\343\202\271\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("select_service_dialog", "\344\272\213\346\245\255\350\200\205", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class select_service_dialog: public Ui_select_service_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_SERVICE_DIALOG_H
