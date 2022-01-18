#include "animal.h"
#include <iostream>
using namespace std;

animal::animal(string n)
{
    this->nom = n;
}
animal::~animal()
{
    cout<<"destructeur de la classe animal"<<endl;

}
void animal::manger()const
{
    cout<<"manger de la classe animal"<<endl;
}

void animal::afficher()const
{
    cout<<"affichage de la classe animal"<<endl;
    cout<<"nom: "<<this->nom<<endl;
}

