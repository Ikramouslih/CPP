#include <iostream>
#include "heure.h"

using namespace std;

Heure::Heure(int h, int min , int sec)
{
    /*if(h < 24 && h > 0)
        this->heure = h;
    else 
        this->heure = 0;*///le 0 est important car la valeur par defaut d'utilise juste si on n'entre pas de parametres
    this->heure = (h < 24 && h >= 0) ? h : 0;
    this->min = (min < 60 && min >= 0) ? min : 0;
    this->sec = (sec < 60 && sec >= 0) ? sec : 0;

}

void Heure::print()const
{
    cout<<this->heure<<":"<<this->min<<":"<<this->sec<<endl;

}

int Heure::converttosec()const
{
    int res=this->heure*3600 + this->min*60 + this->sec;
    return res;
}

bool Heure::operator>(const Heure& H) const
{
    return (this->converttosec() > H.converttosec()) ? true : false;
    
}

Heure::~Heure()
{
    cout<<"destructeur de la classe heure"<<endl;
}
