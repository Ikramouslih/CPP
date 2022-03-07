#include <iostream>
#include "mad.h"

using namespace std;

mad::mad(double valeur):devise(valeur){}

mad::~mad()
{
    cout<<"dest de la classe mad"<<endl;
}

mad mad::operator-=(const mad &d)
{
    return this->valeur - d.valeur;
}

mad mad::operator+=(const mad &d)
{
    return this->valeur + d.valeur;
}

bool mad::operator>=(const mad &d)
{
    if(this->valeur >= d.valeur)
        return true;
    return false;
}

mad& mad::operator=(const mad &d)
{
    this->valeur = d.valeur;
    return *this;
}

string mad::get_symbole()const
{
    return this->symbole;
}

double mad::get_solde()const
{
    return this->devise::valeur ;
}
