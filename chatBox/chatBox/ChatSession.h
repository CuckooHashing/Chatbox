#pragma once
#include "Subject.h"
#include "UserMessage.h"
#include <vector>
class ChatSession :
	public Subject
{
	private:
		std::vector<UserMessage> mesaje;

public:
	ChatSession();
	void addmsg(UserMessage msg) 
	{
		this->mesaje.push_back(msg);
		this->notify();
	}
	std::vector<UserMessage> getAll() { return this->mesaje; }
	~ChatSession();
};

