#include "devise.h"
#include <assert.h>
using namespace std; 

devise::devise(double v)
{
	this->valeur = v;
}

devise::~devise()
{
	//cout << "dest de la classe devise" << endl;
}

void devise::afficher() const
{
	cout << this->valeur << endl;
}

bool devise::operator>=(const devise& montant)
{
	return this->valeur >= montant.valeur;
}

devise devise::operator-(const devise& montant)
{
	devise res(this->valeur - montant.valeur);
	return res;
}
devise devise::operator+(const devise& montant)
{
	devise res(this->valeur + montant.valeur);
	return res;
}

devise devise::operator*(const double& taux)
{
	return devise(this->valeur * taux);
}

devise devise::operator/(const double& taux)
{
	assert(taux != 0);
	return devise(this->valeur / taux);
}
