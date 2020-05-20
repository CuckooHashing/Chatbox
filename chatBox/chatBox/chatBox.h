#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chatBox.h"
#include "Observer.h"
#include "ChatSession.h"

class chatBox : public QMainWindow, public Observer
{
	Q_OBJECT
private:
	ChatSession& chat;
	std::string user;
public:
	chatBox(ChatSession &c, std::string user, QWidget *parent = Q_NULLPTR);
	void update() override;
	


private:
	Ui::chatBoxClass ui;
	void populate();
private slots:
	void sendMessage();
};
