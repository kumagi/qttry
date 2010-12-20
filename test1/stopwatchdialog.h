/****************************************************************************
** Form interface generated from reading ui file 'stopwatchdialog.ui'
**
** Created: 金 11月 26 12:07:25 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef STOPWATCHDIALOG_H
#define STOPWATCHDIALOG_H

#include <QMainWindow>
#include <QtGui>

#include "ui_stopwatchdialog.h"

class StopWatchDialog : public QMainWindow, private Ui::stopWatch
{
	Q_OBJECT

public:
	StopWatchDialog(QMainWindow *parent = 0);

private slots:
	void on_startButton_pressed();
	void on_stopButton_pressed();
	void showTime();
private:
	QTimer* timer;
	QTime time;
};
#endif // STOPWATCHDIALOG_H
