#include "one_service.hpp"
#include <iostream>
#include <QtGui>

#include <boost/lexical_cast.hpp>

one_service::one_service(QWidget* parent):QWidget(parent){
	schedule_image_plan = QImage(400,15,QImage::Format_ARGB32);
	schedule_image_plan.fill(qRgba(255,255,255,255));
	schedule_image_done = QImage(400,15,QImage::Format_ARGB32);
	schedule_image_done.fill(qRgba(255,192,192,255));
}

static const QPoint image_begin(208,0);
static const QPoint image_begin2(208,15);
static const int x_offset = 230;
void one_service::paintEvent(QPaintEvent* event){
	std::cout <<  "painted\n";

	const QColor plan = Qt::white;
	const QColor done = Qt::lightGray;

	QPainter painter(this);
	painter.drawImage(image_begin, schedule_image_plan);
	painter.drawImage(image_begin2, schedule_image_done);

	painter.setPen(Qt::gray);
	for(int i=0;i<=31;i++){
		const int x = 228+i*12;
		painter.drawLine(x, 0, x, 29);
	}
	// draw horizontal line
	painter.drawLine(208,15,600,15);

	// write times
	for(size_t i=0;i<plan_schedule.size();i++){
		if(plan_schedule[i] == 1){
			painter.drawText(x_offset + i*13, 0, tr("1"));
		}else if(plan_schedule[i] == 2){
			painter.drawText(x_offset + i*13, 0, tr("2"));
		}
	}
	for(size_t i=0;i<done_schedule.size();i++){
		if(done_schedule[i] == 1){
			painter.drawText(x_offset + i*13, 15, tr("1"));
		}else if(done_schedule[i] == 2){
			painter.drawText(x_offset + i*13, 15, tr("2"));
		}
	}
}

void one_service::mousePressEvent(QMouseEvent* const event){
	if(event->buttons() & Qt::LeftButton){
		std::cout << "clicked\n";
	}
}
void one_service::mouseMoveEvent(QMouseEvent* const event){
	std::cout << "mouse_move:" << event->pos().x();
}
void one_service::mouseDoubleClickEvent(QMouseEvent* const event){
	const QPoint& clicked = event->pos();
	std::cout << "double clicked\n";
	if(x_offset < clicked.x()){
			if(clicked.y() < 15){
				char& target = plan_schedule[(clicked.x() - x_offset)/13];
				target += 1;
				if(target > 2){target = 0;}
			}else{
				char& target = done_schedule[(clicked.x() - x_offset)/13];
				target += 1;
				if(target > 2){target = 0;}
			}
	}
	update();
	updateGeometry();
}
