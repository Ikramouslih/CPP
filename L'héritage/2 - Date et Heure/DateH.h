#pragma once
#include "heure.h"
class DateH : public Heure
{
    public: 
    DateH(int h, int min, int sec, int j , int m , int a);
    ~DateH();
    void print()const;//masquage
    int maxdays()const;
    bool isbis()const;
    bool operator>(const DateH& D)const;
    int converttodays()const;

    protected : 
    int annee;
    int mois;
    int jour;
};