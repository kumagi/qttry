/********************************************************************************
** Form generated from reading UI file 'care_plan_dialog.ui'
**
** Created: Tue Dec 21 05:58:23 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARE_PLAN_DIALOG_H
#define UI_CARE_PLAN_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_monthly_care_plan
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QWidget *human_widget;
    QFrame *frame;

    void setupUi(QDialog *monthly_care_plan)
    {
        if (monthly_care_plan->objectName().isEmpty())
            monthly_care_plan->setObjectName(QString::fromUtf8("monthly_care_plan"));
        monthly_care_plan->resize(800, 480);
        QFont font;
        font.setFamily(QString::fromUtf8("Takao P\343\202\264\343\202\267\343\203\203\343\202\257"));
        monthly_care_plan->setFont(font);
        verticalLayoutWidget = new QWidget(monthly_care_plan);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 160, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        human_widget = new QWidget(monthly_care_plan);
        human_widget->setObjectName(QString::fromUtf8("human_widget"));
        human_widget->setGeometry(QRect(160, 0, 641, 561));
        frame = new QFrame(monthly_care_plan);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -1, 161, 491));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(monthly_care_plan);

        QMetaObject::connectSlotsByName(monthly_care_plan);
    } // setupUi

    void retranslateUi(QDialog *monthly_care_plan)
    {
        monthly_care_plan->setWindowTitle(QApplication::translate("monthly_care_plan", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("monthly_care_plan", "\346\234\210\351\226\223\343\202\261\343\202\242\343\203\227\343\203\251\343\203\263", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class monthly_care_plan: public Ui_monthly_care_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARE_PLAN_DIALOG_H
