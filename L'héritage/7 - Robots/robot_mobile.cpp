#include "robot_mobile.h"
using namespace std;

robot_mobile::robot_mobile(string nom, int vitesse, Go* ram, int nr, float p)
	:robot(nom,vitesse,ram)
{
	this->nbr_roue = nr;
	this->position = p;
}

robot_mobile::~robot_mobile()
{
	cout<< "dest de la classe robot_mobile" << endl;
}

void robot_mobile::display() const
{
	this->robot::display();
	this->robot::connecter();
	cout << "Type : Mobile" << endl;
}
