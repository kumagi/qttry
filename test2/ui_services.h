/********************************************************************************
** Form generated from reading UI file 'services.ui'
**
** Created: Tue Dec 21 05:58:23 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICES_H
#define UI_SERVICES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_care_plan_widget
{
public:
    QLabel *service_name;
    QLabel *provider;
    QLabel *time;
    QFrame *line_2;
    QFrame *line_1;
    QScrollArea *service_area;
    QWidget *scrollAreaWidgetContents;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *frame;

    void setupUi(QWidget *care_plan_widget)
    {
        if (care_plan_widget->objectName().isEmpty())
            care_plan_widget->setObjectName(QString::fromUtf8("care_plan_widget"));
        care_plan_widget->setEnabled(true);
        care_plan_widget->resize(620, 320);
        care_plan_widget->setContextMenuPolicy(Qt::NoContextMenu);
        service_name = new QLabel(care_plan_widget);
        service_name->setObjectName(QString::fromUtf8("service_name"));
        service_name->setGeometry(QRect(60, 0, 71, 18));
        provider = new QLabel(care_plan_widget);
        provider->setObjectName(QString::fromUtf8("provider"));
        provider->setGeometry(QRect(150, 0, 51, 18));
        time = new QLabel(care_plan_widget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(10, 0, 31, 18));
        line_2 = new QFrame(care_plan_widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(130, 0, 20, 21));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_1 = new QFrame(care_plan_widget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(40, 0, 20, 21));
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);
        service_area = new QScrollArea(care_plan_widget);
        service_area->setObjectName(QString::fromUtf8("service_area"));
        service_area->setGeometry(QRect(0, 20, 621, 301));
        service_area->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        service_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        service_area->setWidgetResizable(false);
        service_area->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 599, 297));
        service_area->setWidget(scrollAreaWidgetContents);
        line_3 = new QFrame(care_plan_widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(200, 0, 20, 21));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(care_plan_widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(220, 0, 20, 21));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(care_plan_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 621, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(care_plan_widget);

        QMetaObject::connectSlotsByName(care_plan_widget);
    } // setupUi

    void retranslateUi(QWidget *care_plan_widget)
    {
        care_plan_widget->setWindowTitle(QApplication::translate("care_plan_widget", "Form", 0, QApplication::UnicodeUTF8));
        service_name->setText(QApplication::translate("care_plan_widget", "\343\202\265\343\203\274\343\203\223\343\202\271\345\220\215", 0, QApplication::UnicodeUTF8));
        provider->setText(QApplication::translate("care_plan_widget", "\344\272\213\346\245\255\350\200\205", 0, QApplication::UnicodeUTF8));
        time->setText(QApplication::translate("care_plan_widget", "\346\231\202\351\226\223", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class care_plan_widget: public Ui_care_plan_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICES_H
