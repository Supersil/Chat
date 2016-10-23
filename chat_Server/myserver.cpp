#include "myserver.h"


MyServer::MyServer(QObject *parent) :
	 QObject(parent)
{
	 server = new QTcpServer(this);
	 server->listen(QHostAddress::Any, TCP_PORT);
	 std::cout << "Server started!" << std::endl;
	 connect(server, SIGNAL(newConnection()), this, SLOT(incommingConnection())); // подключаем сигнал "новое подключение" к нашему обработчику подключений
}


void MyServer::incommingConnection() // обработчик подключений
{
	 QTcpSocket * socket = server->nextPendingConnection(); // получаем сокет нового входящего подключения
//	 connect(socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(stateChanged(QAbstractSocket::SocketState))); // делаем обработчик изменения статуса сокета
//	 if (!firstSocket) { // если у нас нет "вещающего", то данное подключение становится вещающим
		  connect(socket, SIGNAL(readyRead()), this, SLOT(incommingMsg())); // подключаем входящие сообщения от вещающего на наш обработчик
//		  socket->write("server"); // говорим ему что он "вещает"
//		  firstSocket = socket; // сохраняем себе"
//		  qDebug() << "this one is server";
//	 }
//	 else { // иначе говорим подключенному что он "получатель"
//		  socket->write("client");
//		  std::cout << "New client" << std::endl;
		  sockets << socket;
//	 }
}
void MyServer::incommingMsg() // обработчик входящих сообщений от "вещающего"
{
	QObject * object = QObject::sender(); // далее и ниже до цикла идет преобразования "отправителя сигнала" в сокет, дабы извлечь данные
	if (!object)
		return;
//	 qDebug() << "[1]";
	QTcpSocket * socket = static_cast<QTcpSocket *>(object);
	QByteArray arr =  socket->readAll();
	if (arr.toStdString().find("NewClientSecretCode!@#.__Name") != -1)
	//									 01234567890123456789012345678
	{
		arr.remove(0,29);
		std::cout << "New client: " << arr.toStdString() <<std::endl;

		if (!logins.empty())
		{
			socket->write("LoginListSecretCode!@#.__Begin");
			//					012345678901234567890123456789
			QByteArray login;
			foreach(login,logins)
				socket->write(login);
			socket->write("LoginListSecretCode!@#.__End");
			//					0123456789012345678901234567
		}
		logins.append(arr);
	}
	else
		std::cout << arr.toStdString() <<std::endl;
	 // на самом деле весь верхний код можно было заменить на firstSocket, но я выдирал код из другого проекта, и переписывать мне лень :)
	 foreach(QTcpSocket *socket, sockets) { // пишем входящие данные от "вещающего" получателям
		  if (socket->state() == QTcpSocket::ConnectedState)
				socket->write(arr);
	 }

}
