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

#endif
