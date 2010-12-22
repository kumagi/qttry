#ifndef MONTHLY_CARE_PLAN_HPP
#define MONTHLY_CARE_PLAN_HPP
#include <iostream>

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QApplication>
#include <QSplitter>

#include "one_human.hpp"

class monthly_care_plan :public QWidget{
public:
	QWidget *verticalLayoutWidget;
	QVBoxLayout *verticalLayout;
	QLabel *care_plan_label;
	QListWidget *human_list;
	one_human *human_widget;
public:
	monthly_care_plan(QWidget* parent):QWidget(parent){
		if (parent->objectName().isEmpty()){
			parent->setObjectName(QString::fromUtf8("monthly_care_plan"));
		}
		parent->resize(800, 480);
		
		QSplitter splitter(Qt::Horizontal);
		
		verticalLayoutWidget = new QWidget(parent);
		verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
		verticalLayoutWidget->setGeometry(QRect(0, 0, 160, 480));
		verticalLayoutWidget->setMinimumSize(160,480);
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
		human_list->setMinimumSize(161,440);
		human_list->setMouseTracking(false);
		human_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

		verticalLayout->addWidget(human_list);

		human_widget = new one_human(this);
		human_widget->setGeometry(161, 0, 800-160, 480);

		this->retranslateUi(parent);

		QMetaObject::connectSlotsByName(parent);
		this->setMinimumSize(300,480);
	}
protected:
	virtual void resizeEvent(QResizeEvent*){
		std::cout << "resized\n";
		const int extraWidth = width() - verticalLayoutWidget->width();
		const int newHeight = height();
		verticalLayout->setGeometry(QRect(0,0,160,newHeight));
		human_widget->setGeometry(161,0,extraWidth, newHeight);
	}
public:
	void retranslateUi(QWidget *monthly_care_plan)
	{
		monthly_care_plan->setWindowTitle(QApplication::translate("monthly_care_plan", "Form", 0, QApplication::UnicodeUTF8));
		care_plan_label->setText(QApplication::translate("monthly_care_plan", "\346\234\210\351\226\223\343\202\261\343\202\242\343\203\227\343\203\251\343\203\263", 0, QApplication::UnicodeUTF8));
	} // retranslateUi
	
};
#endif
