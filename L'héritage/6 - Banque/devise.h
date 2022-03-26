#pragma once
#include <iostream>
using namespace std;

class devise
{
	private: 
		double valeur;
    public :
		devise(double v);
		~devise();
		void afficher() const;
		bool operator>=(const devise& montant);
		devise operator-(const devise& montant);
		devise operator+(const devise& montant);
		devise operator*(const double& taux);
		devise operator/(const double& taux);

};

