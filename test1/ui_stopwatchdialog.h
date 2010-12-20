/********************************************************************************
** Form generated from reading UI file 'stopwatchdialog.ui'
**
** Created: Fri Nov 26 14:05:27 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPWATCHDIALOG_H
#define UI_STOPWATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stopWatch
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopButton;
    QPushButton *startButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stopWatch)
    {
        if (stopWatch->objectName().isEmpty())
            stopWatch->setObjectName(QString::fromUtf8("stopWatch"));
        stopWatch->resize(401, 305);
        centralwidget = new QWidget(stopWatch);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setEnabled(true);
        lcdNumber->setGeometry(QRect(0, 0, 401, 231));
        lcdNumber->setNumDigits(7);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 230, 401, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopButton = new QPushButton(horizontalLayoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(stopButton);

        startButton = new QPushButton(horizontalLayoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(startButton);

        stopWatch->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stopWatch);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 401, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        stopWatch->setMenuBar(menubar);
        statusbar = new QStatusBar(stopWatch);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(true);
        stopWatch->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());

        retranslateUi(stopWatch);
        QObject::connect(startButton, SIGNAL(pressed()), lcdNumber, SLOT(update()));

        QMetaObject::connectSlotsByName(stopWatch);
    } // setupUi

    void retranslateUi(QMainWindow *stopWatch)
    {
        stopWatch->setWindowTitle(QApplication::translate("stopWatch", "Stop Watch", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("stopWatch", "stop", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("stopWatch", "Start", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("stopWatch", "file", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("stopWatch", "edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class stopWatch: public Ui_stopWatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCHDIALOG_H
