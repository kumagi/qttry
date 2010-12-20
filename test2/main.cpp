#include <QApplication>
#include <QDialog>

#include "test2.h"

#include <boost/scoped_ptr.hpp>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	window care_manage;
	//IconEditor ic;
	care_manage.show();
//	ic.show();

	return app.exec();
}
