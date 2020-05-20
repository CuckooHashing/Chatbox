#include "UserMessage.h"



UserMessage::UserMessage(std::string u, std::string m)
{
	this->message = m;
	this->user = u;
}


UserMessage::~UserMessage()
{
}
