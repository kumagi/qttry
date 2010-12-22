/********************************************************************************
** Form generated from reading UI file 'monthly_care_plan.ui'
**
** Created: Tue Dec 21 14:06:30 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLY_CARE_PLAN_H
#define UI_MONTHLY_CARE_PLAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
    QLabel *care_plan_label;
    QListWidget *human_list;
    QWidget *human_widget;

    void setupUi(QWidget *monthly_care_plan)
    {
        if (monthly_care_plan->objectName().isEmpty())
            monthly_care_plan->setObjectName(QString::fromUtf8("monthly_care_plan"));
        monthly_care_plan->resize(800, 480);
        verticalLayoutWidget = new QWidget(monthly_care_plan);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 160, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        care_plan_label = new QLabel(verticalLayoutWidget);
        care_plan_label->setObjectName(QString::fromUtf8("care_plan_label"));
        QFont font;
        font.setPointSize(14);
        care_plan_label->setFont(font);
        care_plan_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(care_plan_label);

        human_list = new QListWidget(verticalLayoutWidget);
        human_list->setObjectName(QString::fromUtf8("human_list"));
        human_list->setMouseTracking(false);
        human_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout->addWidget(human_list);

        human_widget = new QWidget(monthly_care_plan);
        human_widget->setObjectName(QString::fromUtf8("human_widget"));
        human_widget->setGeometry(QRect(160, 0, 641, 481));

        retranslateUi(monthly_care_plan);

        QMetaObject::connectSlotsByName(monthly_care_plan);
    } // setupUi

    void retranslateUi(QWidget *monthly_care_plan)
    {
        monthly_care_plan->setWindowTitle(QApplication::translate("monthly_care_plan", "Form", 0, QApplication::UnicodeUTF8));
        care_plan_label->setText(QApplication::translate("monthly_care_plan", "\346\234\210\351\226\223\343\202\261\343\202\242\343\203\227\343\203\251\343\203\263", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class monthly_care_plan: public Ui_monthly_care_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLY_CARE_PLAN_H
