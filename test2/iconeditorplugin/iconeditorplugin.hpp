#ifndef ICONEDITORPLUGIN_HPP
#define ICONEDITORPLUGIN_HPP

#include <QDesignerCustomWidgetInterface>
class IconEditorPlugin : public QObject, public QDesignerCustomWidgetInterface
{
	QObject;
	Q_INTERFACES(QDesignerCustomWidgetInterface);

public:
	IconEditorPlugin(QObject* parent = 0):QObject(parent){}
	QString includeFile()const{
		return "iconeditor.h";
	}
	QString group() const{
		return tr("Image Manipulation Widgets");
	}
	QIcon icon()const{
		return QIcon(":/images/iconeditor.png");
	}
	QString toolTip()const{
		return tr("An icon editor widget");
	}
	QString whatsThis()const{
		return tr("sample");
	}
	QString isContainer()const{return false;}
	QWidget createWidget(QWidge* parent){
		return new IconEditor(parent);
	}
	Q_EXPORT_PLUGIN2(iconeditorplugin, IconEditorPlugin);
};
#endif
