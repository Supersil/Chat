#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	curstate = 0;
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_sendBtn_clicked()
{
	QString Msg;

	if (login.length()!= 0) Msg.append(login);
	else	Msg.append("NoName");

	Msg.append(": ");

	Msg.append(ui->MsgLine->text());
	ui->MsgLine->clear();

	if (Msg.length()!=0)
		ui->txtBox->append(Msg);

	ui->MsgLine->setFocus();

}

void MainWindow::on_loginBtn_clicked()
{
	if (ui->loginEdit->text().length() != 0)
	{
		login = ui->loginEdit->text();
		ui->userList->append(login);
	}
	ui->loginEdit->clear();

//	QString addr;
//	addr = "127.0.0.1";
//	QHostAddress localhost;
//	localhost.setAddress(addr);
	socket.connectToHost(QHostAddress::LocalHost,28147);
	QByteArray msg;
	msg.insert(0,"NewClientSecretCode!@#.__Name");
	msg.insert(29,login);
	socket.write(msg);
	connect(&socket, SIGNAL(readyRead()), this, SLOT(incommingMsg()));
}


void MainWindow::incommingMsg()
{
	QByteArray arr = socket.readAll();
	ui->txtBox->append(arr);

}
