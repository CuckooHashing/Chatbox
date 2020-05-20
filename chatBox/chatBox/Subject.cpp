#include "Subject.h"



Subject::Subject()
{
}

void Subject::registerObserver(Observer* o)
{
	this->observs.push_back(o);
}

void Subject::unregisterObserver(Observer * o)
{
	std::vector<Observer*>::iterator here = std::find(observs.begin(), observs.end(), o);
	if (here != observs.cend())
	{
		observs.erase(here);
	}
}

void Subject::notify()
{
	for (auto o : observs)
		o->update();
}


Subject::~Subject()
{
}
