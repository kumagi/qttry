#include <QApplication>
#include <QDialog>

#include "stopwatchdialog.h"


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  StopWatchDialog *dialog = new StopWatchDialog;
  dialog->show();

  return app.exec();
}
