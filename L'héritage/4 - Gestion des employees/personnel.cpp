#include "Personnel.h"
#include <iostream>


personnel::personnel()
{
    this->vect_personnel = vector<employe*>();//vecteur de taille 0
}

void personnel::add_employe(employe* e)
{
    this->vect_personnel.push_back(e);
}

float personnel::somme_sal()
{
	float sum = 0;
	for (int i = 0; i < this->vect_personnel.size(); i++)
	{
		sum += this->vect_personnel[i]->calcul_sal();
	}
	return sum;
}

personnel::~personnel()
{
	this->vect_personnel.clear();
}