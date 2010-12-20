#ifndef ONE_SERVICE_HPP
#define ONE_SERVICE_HPP

#include <QtGui/QLabel>
#include <QColor>
#include <QImage>
#include <QWidget>
#include <QPoint>
#include <boost/array.hpp>
#include "ui_one_service.h"

class one_service : public QWidget, public Ui::one_service {
	Q_OBJECT;
	
public:
	one_service(QWidget* parent = 0);

protected:
	void mousePressEvent(QMouseEvent* event);
	void mouseDoubleClickEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event){}
	void paintEvent(QPaintEvent* event);
private:
	QString time;
	QString name;
	QString provider;
	QImage schedule_image_plan,schedule_image_done;
	QLabel name_label;
	QLabel provider_label;
	boost::array<char,31> plan_schedule;
	boost::array<char,31> done_schedule;
};
#endif
