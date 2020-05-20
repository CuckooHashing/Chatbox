#include "chatBox.h"

chatBox::chatBox(ChatSession &c, std::string user, QWidget *parent)
	: chat{ c }, user{ user }, QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromStdString(this->user));
	QObject::connect(this->ui.sendButton, &QPushButton::clicked, this, &chatBox::sendMessage);
}

void chatBox::update()
{
	populate();
}
void chatBox::sendMessage()
{
	QString s = this->ui.chatBar->text();
	this->ui.chatBar->clear();
	std::string ss = s.toStdString(); 
	UserMessage m{ this->user, ss };
	chat.addmsg(m);
	populate();

}
void chatBox::populate()
{
	std::vector<UserMessage> msgs = chat.getAll(); 

	this->ui.listWidget->clear();
	for (auto dorel : msgs)
	{
		QString s = QString::fromStdString(dorel.getuser() + "-> " + dorel.getmsg());
		if (this->user == dorel.getuser())
		{
			QString ss = QString::fromStdString(dorel.getmsg());
			QListWidgetItem* l = new QListWidgetItem{ ss };
			this->ui.listWidget->addItem(l);
			l->setTextAlignment(Qt::AlignRight);
			l->setBackgroundColor("yellow");
		}
		else
			this->ui.listWidget->addItem(s);
	}



}
