/********************************************************************************
** Form generated from reading UI file 'test2.ui'
**
** Created: Mon Dec 20 03:50:58 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_H
#define UI_TEST2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_schedule
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *name;
    QLineEdit *name_edit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *gender;
    QLineEdit *gender_edit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *age;
    QLineEdit *age_edit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *term;
    QLineEdit *term_begin_edit;
    QLabel *childa;
    QLineEdit *term_end_edit;
    QTreeWidget *name_list;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *face_label;

    void setupUi(QDialog *schedule)
    {
        if (schedule->objectName().isEmpty())
            schedule->setObjectName(QString::fromUtf8("schedule"));
        schedule->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(schedule->sizePolicy().hasHeightForWidth());
        schedule->setSizePolicy(sizePolicy);
        schedule->setMinimumSize(QSize(640, 480));
        schedule->setMaximumSize(QSize(640, 480));
        schedule->setMouseTracking(true);
        schedule->setModal(false);
        gridLayoutWidget_2 = new QWidget(schedule);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(230, 10, 251, 31));
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

        horizontalLayoutWidget = new QWidget(schedule);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(490, 10, 61, 31));
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

        horizontalLayoutWidget_2 = new QWidget(schedule);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(560, 10, 71, 31));
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

        horizontalLayoutWidget_3 = new QWidget(schedule);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(230, 40, 401, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        term = new QLabel(horizontalLayoutWidget_3);
        term->setObjectName(QString::fromUtf8("term"));

        horizontalLayout_3->addWidget(term);

        term_begin_edit = new QLineEdit(horizontalLayoutWidget_3);
        term_begin_edit->setObjectName(QString::fromUtf8("term_begin_edit"));

        horizontalLayout_3->addWidget(term_begin_edit);

        childa = new QLabel(horizontalLayoutWidget_3);
        childa->setObjectName(QString::fromUtf8("childa"));

        horizontalLayout_3->addWidget(childa);

        term_end_edit = new QLineEdit(horizontalLayoutWidget_3);
        term_end_edit->setObjectName(QString::fromUtf8("term_end_edit"));

        horizontalLayout_3->addWidget(term_end_edit);

        name_list = new QTreeWidget(schedule);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        name_list->setHeaderItem(__qtreewidgetitem);
        name_list->setObjectName(QString::fromUtf8("name_list"));
        name_list->setGeometry(QRect(0, 10, 141, 411));
        name_list->setFrameShape(QFrame::WinPanel);
        name_list->setFrameShadow(QFrame::Raised);
        name_list->setLineWidth(2);
        name_list->setMidLineWidth(2);
        name_list->setTabKeyNavigation(true);
        name_list->setIconSize(QSize(12, 12));
        name_list->setSortingEnabled(false);
        name_list->setHeaderHidden(true);
        pushButton = new QPushButton(schedule);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 450, 91, 27));
        pushButton_2 = new QPushButton(schedule);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 450, 91, 27));
        face_label = new QLabel(schedule);
        face_label->setObjectName(QString::fromUtf8("face_label"));
        face_label->setGeometry(QRect(150, 10, 61, 61));
        face_label->setTextFormat(Qt::PlainText);
        face_label->setScaledContents(true);
        face_label->setWordWrap(false);
        face_label->setTextInteractionFlags(Qt::NoTextInteraction);
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(schedule);

        QMetaObject::connectSlotsByName(schedule);
    } // setupUi

    void retranslateUi(QDialog *schedule)
    {
        schedule->setWindowTitle(QApplication::translate("schedule", "Mock", 0, QApplication::UnicodeUTF8));
        name->setText(QApplication::translate("schedule", "\350\242\253\344\277\235\351\231\272\350\200\205\346\260\217\345\220\215", 0, QApplication::UnicodeUTF8));
        gender->setText(QApplication::translate("schedule", "\346\200\247\345\210\245", 0, QApplication::UnicodeUTF8));
        age->setText(QApplication::translate("schedule", "\345\271\264\351\275\242", 0, QApplication::UnicodeUTF8));
        term->setText(QApplication::translate("schedule", "\350\252\215\345\256\232\346\234\211\345\212\271\346\234\237\351\226\223", 0, QApplication::UnicodeUTF8));
        childa->setText(QApplication::translate("schedule", "\357\275\236", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("schedule", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("schedule", "\343\202\255\343\203\243\343\203\263\343\202\273\343\203\253", 0, QApplication::UnicodeUTF8));
        face_label->setText(QApplication::translate("schedule", "faceLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class schedule: public Ui_schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
