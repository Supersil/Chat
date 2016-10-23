#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void on_sendBtn_clicked();

	void on_loginBtn_clicked();
	void incommingMsg();

private:
	Ui::MainWindow *ui;
	QString login;
	QTcpSocket socket;
	int curstate;
};

#endif // MAINWINDOW_H
