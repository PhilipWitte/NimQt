#include "mainwindow.h"
#include <QApplication>

int initQt() {
	int argc = 0;
	char **argv = NULL;
	QApplication a(argc, argv);
	MainWindow w;
	
	w.show();
	return a.exec();
}