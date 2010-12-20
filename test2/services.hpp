#ifndef SERVICES_HPP
#define SERVICES_HPP
#include "ui_services.h"
#include "one_service.hpp"
class services : public Ui::care_plan_widget, public QWidget{
public:
	services(QWidget* parent = 0):QWidget(parent){
		setupUi(this);
		service_area->setWidget(new one_service(this));
	}
};
#endif
