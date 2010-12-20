#ifndef TEST2_H
#define TEST2_H
#include <QtGui>
#include <QImage>
#include <QPixmap>
#include "ui_test2.h"
#include <QCoreApplication>

#include "iconeditor/iconeditor.hpp"

class window: public QDialog, private Ui::schedule{
public:
	window():appPath(QCoreApplication::applicationDirPath())
	{
		QPixmap faceicon("pic/ojiichan.jpg");

		map = new IconEditor(this);
		map->setObjectName(QString::fromUtf8("face"));
		map->setGeometry(QRect(150, 80, 481, 341));
		
		setupUi(this);
		face_label->setPixmap(faceicon);
		//face.load(appPath + "pic/ojiichan.jpg");
	}
	void paintEvent(QPaintEvent* iPaintEvent){}
private:
	QString appPath;
	IconEditor* map;
};
#endif
