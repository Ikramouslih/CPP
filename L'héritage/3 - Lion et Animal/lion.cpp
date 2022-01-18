#include "lion.h"
#include <iostream>
using namespace std;

lion::lion(string n, string color)
    : animal(n)
{
    this->color = color;
}

void lion::afficher() const
{
    cout<<"afficher de la classe lion"<<endl;
    this->animal::afficher(); //demasquage
    cout<<"color :"<<this->color<<endl;
   
}

void lion::manger() const
{
    cout<<"manger de la classe lion"<<endl;
}

lion::~lion()
{
    cout<<"destructeur de la classe lion"<<endl;
 
}