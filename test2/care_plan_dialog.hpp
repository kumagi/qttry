#ifndef CARE_PLAN_DIALOG_HPP
#define CARE_PLAN_DIALOG_HPP

#include "ui_monthly_care_plan.h"
#include "one_human.hpp"

#include <QCoreApplication>

class monthly_care_plan : public QWidget, public Ui::monthly_care_plan {
public:
	monthly_care_plan(QWidget* parent = NULL)
		:QWidget(parent),appPath(QCoreApplication::applicationDirPath()){
		setupUi(this);
		setAttribute(Qt::WA_StaticContents);
		setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
		human_widget = new one_human(this);
		human_widget->setGeometry(QRect(160, 0, 641, 481));
		human_widget->show();
	}
private:
	QString appPath; 
};
#endif
