#pragma once
#include"Observer.h"
#include <vector>

class Subject
{
private:
	std::vector<Observer*> observs;
public:
	Subject();
	void registerObserver(Observer* o);
	void unregisterObserver(Observer* o);
	void notify();
	~Subject();
};

