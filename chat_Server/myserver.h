#ifndef MYSERVER
#define MYSERVER

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>
#include <QDataStream>
#include <iostream>

#define TCP_PORT 28147


class MyServer : public QObject
{
	 Q_OBJECT
public:
	 explicit MyServer(QObject *parent = 0); // конструктор
signals:
public slots:
	 void incommingConnection(); // обработчик входящего подключения
	 void incommingMsg(); // обработчик входящих данных
private:
	 QTcpServer *server; // указатель на сервер
	 QList<QTcpSocket *> sockets; // получатели данных
	 QList<QByteArray> logins; // имена участников
};

#endif // MYSERVER

