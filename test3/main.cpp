#include <QApplication>

//#include "one_service.hpp"
#include "monthly_care_plan.hpp"
	
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QWidget main;
	monthly_care_plan cpd(&main);
	
	main.show();
	return app.exec();

};
