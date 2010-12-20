#ifndef CARE_PLAN_DIALOG_HPP
#define CARE_PLAN_DIALOG_HPP

#include "ui_care_plan_dialog.h"
#include "one_human.hpp"

#include <QCoreApplication>

class care_plan_dialog : public Ui::monthly_care_plan, public QDialog{
public:
	care_plan_dialog():appPath(QCoreApplication::applicationDirPath()){
		setupUi(this);
		human_widget = new one_human(this);
		human_widget->setGeometry(QRect(160, 0, 641, 481));
		human_widget->show();
	}
private:
	//one_human* human_widget;
	QString appPath; 
};
#endif
