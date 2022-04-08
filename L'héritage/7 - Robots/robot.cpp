#include "robot.h"
#include "Go.h"
using namespace std;

int robot::count = 0;



robot::robot(string nom, int vitesse, Go* ram):id(++robot::count)
{
	this->nom = nom;
	this->vitesse = vitesse;
	this->ram = ram;
}

robot::~robot()
{
	cout << "dest de la classe robot" << endl;
}

void robot::connecter() const
{
	cout << "Bienvenu , " << this->nom << "!" << endl;
}

void robot::display() const
{
	cout<<"ID: " << this->id << endl;
	cout<<"Nom: " << this->nom << endl;
	cout<<"Vitesse: " << this->vitesse << endl;
	cout << "Taille: ";
	this->ram->Go::afficher();
}

bool robot::sup200() const
{
	return this->ram->operator>=(200);
}
