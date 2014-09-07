#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

// ---

void sendNim(char*);

void sendMsg(string str) {
	char *msg = new char[str.size() + 1];
	copy(str.begin(), str.end(), msg);
	msg[str.size()] = '\0';
	
	sendNim(msg);
	
	delete msg;
}

// ---

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);
}

MainWindow::~MainWindow() {
	delete ui;
}

// ---

void MainWindow::on_helloButton_clicked() { sendMsg(ui->helloButton->text().toStdString()); }
void MainWindow::on_worldButton_clicked() { sendMsg(ui->worldButton->text().toStdString()); }