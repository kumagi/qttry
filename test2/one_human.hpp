#ifndef ONE_HUMAN_HPP
#define ONE_HUMAN_HPP
#include "ui_one_human.h"
#include "services.hpp"
class one_human : public Ui::one_human, public QWidget{
public:
	one_human(QWidget* parent = 0):QWidget(parent){
		setupUi(this);
		schedule_widget = new services(this);
		schedule_widget->setGeometry(QRect(10,110, 621,321));
		schedule_widget->show();
	}
};
#endif
