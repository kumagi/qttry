#ifndef ICONEDITOR_HPP
#define ICONEDITOR_HPP

#include <QColor>
#include <QImage>
#include <QWidget>
#include <QtGui>

class IconEditor : public QWidget {
	Q_OBJECT;
	Q_PROPERTY(QColor penColor READ penColor WRITE setPenColor);
	Q_PROPERTY(QImage iconImage READ iconImage WRITE setIconImage);
	Q_PROPERTY(int zoomFactor READ zoomFactor WRITE setZoomFactor);
public:
	IconEditor(QWidget *parent = NULL):QWidget(parent){
		setAttribute(Qt::WA_StaticContents);
		setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
		curColor = Qt::black;
		zoom = 15;
		image = QImage(16, 16, QImage::Format_ARGB32);
		image.fill(qRgba(255,0,0,0));
	}
	
	void setPenColor(const QColor& newColor){curColor = newColor;}
	QColor penColor()const{return curColor; }
	void setZoomFactor(int newZoom){
		if(newZoom < 1){
			newZoom = 1;
		}
		if(newZoom != zoom){
			zoom = newZoom;
			update();
			updateGeometry();
		}
	}			
	int zoomFactor() const {return zoom; }
	void setIconImage(const QImage& newImage){
		if(newImage != image){
			image = newImage.convertToFormat(QImage::Format_ARGB32);
			update();
			updateGeometry();
		}
	}
	QImage iconImage() const { return image;}
	QSize sizeHint()const{
		const QSize size = zoom >= 3 
			? zoom * image.size()
			: zoom * image.size() + QSize(1,1);
		return size;
	}

protected:
	void mousePressEvent(QMouseEvent* const event){
		if(event->button() == Qt::LeftButton){
			setImagePixel(event->pos(), true);
		}else if(event->button() == Qt::RightButton){
			setImagePixel(event->pos(), false);
		}
	}
	void mouseMoveEvent(QMouseEvent* const event){
		if(event->buttons() & Qt::LeftButton){
			setImagePixel(event->pos(), true);
		}else if(event->buttons() & Qt::RightButton){
			setImagePixel(event->pos(), false);
		}
	}
	void paintEvent(QPaintEvent*  event){
		QPainter painter(this);
		if(zoom >= 3) {
			painter.setPen(palette().foreground().color());
			for(int i=0; i<=image.width(); ++i)
				painter.drawLine(zoom*i, 0, zoom * i,zoom*image.height());
			for(int i=0;i<=image.height(); ++i)
				painter.drawLine(0, zoom*i,zoom*image.width(), zoom*i);
		}
		for(int i=0; i< image.width(); ++i){
			for(int j=0; j< image.height(); ++j){
				const QRect rect = pixelRect(i,j);
				if(!event->region().intersect(rect).isEmpty()){
					const QColor color = QColor::fromRgba(image.pixel(i,j));
					painter.fillRect(rect,color);
				}
			}
		}
	}
private:
	void setImagePixel(const QPoint& pos, bool opaque){
		const int i = pos.x() / zoom;
		const int j = pos.y() / zoom;
		if(image.rect().contains(i,j)){
			if(opaque){image.setPixel(i,j,penColor().rgba());}
			else { image.setPixel(i,j,qRgba(0,0,0,0));}
			update(pixelRect(i,j));
		}
	}
	QRect pixelRect(const int i, const int j)const{
		if(zoom >= 3){
			return QRect(zoom*i+1, zoom*j+1,zoom-1, zoom-1);
		}else{
			return QRect(zoom*i,zoom*j,zoom,zoom);
		}
	}
	QColor curColor;
	QImage image;
	int zoom;
};


#endif
