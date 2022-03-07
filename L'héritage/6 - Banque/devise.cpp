#include <iostream>
#include "devise.h"

using namespace std;

devise::devise(double valeur)
{
    this->valeur = valeur;
}


devise::~devise()
{
    cout<<"dest de la classe devise"<<endl;
}