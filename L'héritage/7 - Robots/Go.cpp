#include "Go.h"
using namespace std;

Go::Go(float t)
{
	this->taille = t;
}

Go::~Go()
{
	cout << "dest de la classe Go" << endl;
}

void Go::afficher()const
{
	cout << this->taille << " Go" << endl;
}

bool Go::operator>=(float t) const
{
	return (this->taille>= t);
}
