#pragma once
#include <string>
class UserMessage
{
private:
	std::string message, user;
public:
	UserMessage(std::string u, std::string m);
	std::string getuser() { return this->user; }
	std::string getmsg() { return this->message; }
	~UserMessage();
};

