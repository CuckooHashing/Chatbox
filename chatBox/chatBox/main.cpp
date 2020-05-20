#include "chatBox.h"
#include <QtWidgets/QApplication>
#include "ChatSession.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ChatSession s{};
	
	chatBox w{s, "Dorel"};
	chatBox w2{ s, "Marcel" };
	chatBox w3{ s, "Cornel" };

	s.registerObserver(&w);
	s.registerObserver(&w2);
	s.registerObserver(&w3);

	w.show();
	w2.show();
	w3.show();
	return a.exec();
}
