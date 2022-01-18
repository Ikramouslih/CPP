#include "DateH.h"
#include <iostream>

using namespace std;

DateH::DateH (int h, int min, int sec, int j , int m , int a)
            : Heure(h,min,sec)
{
    this->annee= (a>1900) ? a : 1900;
    this->mois = (m>0 && m<13) ? m : 1;
    this->jour = (j>0 && j<= this->maxdays()) ? : 1;
    
}

void DateH::print()const
{
    this->Heure::print();
    cout<<this->jour<<"/"<<this->mois<<"/"<<this->annee<<endl;
}

bool DateH::operator>(const DateH& D)const
{
    if (this->converttodays() > D.converttodays())
        return true;
    else if (this->converttodays() == D.converttodays())
        return this->Heure::operator>(D);
    else
    {
        return false;
    }
}

int DateH::converttodays()const
{
int res;

    if(this->isbis())
    {
        res = this->annee*366 + this->mois*this->maxdays() + this->jour;
    }
    else
    {
        res = this->annee*365 + this->mois*this->maxdays() + this->jour;

    }
    return res;
}

bool DateH::isbis() const
{
    if (this->annee % 4 ==0)
        return true;
    return false;
    //return (this->annee % 4 == 0 );
}
int DateH::maxdays()const
{
    int maxjour;
    if(this->mois == 2)
    {
        if(this->isbis() == true)
        {
            maxjour = 29;
        }   
        else
        {
            maxjour = 28;
        }
    }
    else
    {
        maxjour = ((this->mois > 7 && this->mois % 2 == 1) || (this->mois < 7 && this->mois % 2 == 0)) ? 30 : 31;
    }

    return maxjour;

}