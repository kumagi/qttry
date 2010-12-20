#include <QApplication>
#include <QDialog>

#include "care_plan_dialog.hpp"



//#include <boost/scoped_ptr.hpp>


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	care_plan_dialog cpd;

	//IconEditor ic;
	cpd.show();
	cpd.human_widget->show();
//	ic.show();

	return app.exec();
}
