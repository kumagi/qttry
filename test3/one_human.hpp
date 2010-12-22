#ifndef ONE_HUMAN_HPP
#define ONE_HUMAN_HPP

#include "ui_one_human.h"

class one_human: public QWidget, Ui::one_human{
public:
	one_human(QWidget* const parent):QWidget(parent){
		setupUi(this);
	}
};
#endif
