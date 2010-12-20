/****************************************************************************
** Form implementation generated from reading ui file 'stopwatchdialog.ui'
**
** Created: 金 11月 26 12:12:34 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/
#include <QtGui>
#include "stopwatchdialog.h"

#include <iostream>

StopWatchDialog::StopWatchDialog(QMainWindow *parent):QMainWindow(parent){
	setupUi(this);
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
}

void StopWatchDialog::on_startButton_pressed(){
	std::cout << "oisu-" << std::endl;
	startButton->setEnabled(false);
	stopButton->setEnabled(true);
	timer->start(100);
	time.start();
}
void StopWatchDialog::on_stopButton_pressed(){
	startButton->setEnabled(true);
	stopButton->setEnabled(false);
	timer->stop();
}

void StopWatchDialog::showTime()
{
  lcdNumber->display(time.elapsed());
}
