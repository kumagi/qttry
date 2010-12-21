#ifndef ONE_SERVICE_HPP
#define ONE_SERVICE_HPP

#include <QtGui/QLabel>
#include <QColor>
#include <QImage>
#include <QWidget>
#include <QPoint>
#include <boost/array.hpp>
#include "ui_one_service.h"

#include <Qt>
#include <QMouseEvent>

class one_service : public QWidget, public Ui::one_service {
	Q_OBJECT;
	
public: 
	one_service(QWidget* parent = 0);
	QSize sizeHint()const{
		const QSize size(600,40);
		return size;
	}
protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseDoubleClickEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void paintEvent(QPaintEvent* event);
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
