#include "robot_fix.h"
using namespace std;

robot_fix::robot_fix(string nom, int vitesse, Go* ram)
	:robot(nom,vitesse,ram)
{
}

robot_fix::~robot_fix()
{
	cout << "dest de la classe robot_fix" << endl;
}

void robot_fix::display() const
{
	this->robot::display();
	this->robot::connecter();
	cout << "Type : Fix" << endl;
}
