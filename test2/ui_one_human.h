/********************************************************************************
** Form generated from reading UI file 'one_human.ui'
**
** Created: Tue Dec 21 05:58:23 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONE_HUMAN_H
#define UI_ONE_HUMAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_one_human
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *FacePanel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *gender;
    QLineEdit *gender_edit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *age;
    QLineEdit *age_edit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *name;
    QLineEdit *name_edit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *term;
    QLineEdit *term_end_edit;
    QLabel *childa;
    QLineEdit *term_begin_edit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateEdit *yeas;
    QLabel *label;
    QDateEdit *month;
    QLabel *label_2;
    QWidget *schedule_widget;
    QFrame *frame;

    void setupUi(QWidget *one_human)
    {
        if (one_human->objectName().isEmpty())
            one_human->setObjectName(QString::fromUtf8("one_human"));
        one_human->resize(640, 480);
        pushButton = new QPushButton(one_human);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 440, 81, 27));
        pushButton_2 = new QPushButton(one_human);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 440, 81, 27));
        FacePanel = new QLabel(one_human);
        FacePanel->setObjectName(QString::fromUtf8("FacePanel"));
        FacePanel->setGeometry(QRect(50, 10, 91, 91));
        horizontalLayoutWidget = new QWidget(one_human);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(458, 10, 81, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gender = new QLabel(horizontalLayoutWidget);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(gender);

        gender_edit = new QLineEdit(horizontalLayoutWidget);
        gender_edit->setObjectName(QString::fromUtf8("gender_edit"));

        horizontalLayout->addWidget(gender_edit);

        horizontalLayoutWidget_2 = new QWidget(one_human);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(550, 10, 81, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        age = new QLabel(horizontalLayoutWidget_2);
        age->setObjectName(QString::fromUtf8("age"));
        age->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(age);

        age_edit = new QLineEdit(horizontalLayoutWidget_2);
        age_edit->setObjectName(QString::fromUtf8("age_edit"));
        age_edit->setMaxLength(3);
        age_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(age_edit);

        gridLayoutWidget_2 = new QWidget(one_human);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(180, 10, 261, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(gridLayoutWidget_2);
        name->setObjectName(QString::fromUtf8("name"));
        name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(name, 0, 0, 1, 1);

        name_edit = new QLineEdit(gridLayoutWidget_2);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        gridLayout_2->addWidget(name_edit, 0, 1, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(one_human);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(180, 40, 451, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        term = new QLabel(horizontalLayoutWidget_3);
        term->setObjectName(QString::fromUtf8("term"));

        horizontalLayout_3->addWidget(term);

        term_end_edit = new QLineEdit(horizontalLayoutWidget_3);
        term_end_edit->setObjectName(QString::fromUtf8("term_end_edit"));

        horizontalLayout_3->addWidget(term_end_edit);

        childa = new QLabel(horizontalLayoutWidget_3);
        childa->setObjectName(QString::fromUtf8("childa"));

        horizontalLayout_3->addWidget(childa);

        term_begin_edit = new QLineEdit(horizontalLayoutWidget_3);
        term_begin_edit->setObjectName(QString::fromUtf8("term_begin_edit"));

        horizontalLayout_3->addWidget(term_begin_edit);

        horizontalLayoutWidget_4 = new QWidget(one_human);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(380, 70, 252, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        yeas = new QDateEdit(horizontalLayoutWidget_4);
        yeas->setObjectName(QString::fromUtf8("yeas"));
        yeas->setDateTime(QDateTime(QDate(2010, 1, 1), QTime(0, 0, 0)));
        yeas->setCurrentSection(QDateTimeEdit::YearSection);

        horizontalLayout_4->addWidget(yeas);

        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        month = new QDateEdit(horizontalLayoutWidget_4);
        month->setObjectName(QString::fromUtf8("month"));
        month->setCurrentSection(QDateTimeEdit::MonthSection);

        horizontalLayout_4->addWidget(month);

        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        schedule_widget = new QWidget(one_human);
        schedule_widget->setObjectName(QString::fromUtf8("schedule_widget"));
        schedule_widget->setGeometry(QRect(10, 110, 621, 321));
        frame = new QFrame(one_human);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 641, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(one_human);

        QMetaObject::connectSlotsByName(one_human);
    } // setupUi

    void retranslateUi(QWidget *one_human)
    {
        one_human->setWindowTitle(QApplication::translate("one_human", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("one_human", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("one_human", "\343\202\255\343\203\243\343\203\263\343\202\273\343\203\253", 0, QApplication::UnicodeUTF8));
        FacePanel->setText(QApplication::translate("one_human", "FacePanel", 0, QApplication::UnicodeUTF8));
        gender->setText(QApplication::translate("one_human", "\346\200\247\345\210\245", 0, QApplication::UnicodeUTF8));
        age->setText(QApplication::translate("one_human", "\345\271\264\351\275\242", 0, QApplication::UnicodeUTF8));
        name->setText(QApplication::translate("one_human", "\350\242\253\344\277\235\351\231\272\350\200\205\346\260\217\345\220\215", 0, QApplication::UnicodeUTF8));
        term->setText(QApplication::translate("one_human", "\350\252\215\345\256\232\346\234\211\345\212\271\346\234\237\351\226\223", 0, QApplication::UnicodeUTF8));
        childa->setText(QApplication::translate("one_human", "\357\275\236", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("one_human", "\344\272\210\345\256\232/\345\256\237\347\270\276", 0, QApplication::UnicodeUTF8));
        yeas->setDisplayFormat(QApplication::translate("one_human", "yyyy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("one_human", "\345\271\264", 0, QApplication::UnicodeUTF8));
        month->setDisplayFormat(QApplication::translate("one_human", "MM", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("one_human", "\346\234\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class one_human: public Ui_one_human {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONE_HUMAN_H
