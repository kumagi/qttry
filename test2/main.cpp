#include <QApplication>
#include <QDialog>

#include "care_plan_dialog.hpp"

#include "iconeditor/iconeditor.hpp"

//#include <boost/scoped_ptr.hpp>


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	monthly_care_plan cpd;

	//IconEditor ic;
	//ic.show();
	
	cpd.show();


	return app.exec();
}
