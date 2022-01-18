#include "liger.h"
#include <iostream>
using namespace std;

liger::liger(string n, string c, int t)
    : lion(n,c)
{
    this->taille = t;
}


void liger::manger() const
{
    cout<<"manger de la classe liger"<<endl;
}


liger::~liger()
{
    cout<<"destructeur de la classe liger"<<endl;
 
}