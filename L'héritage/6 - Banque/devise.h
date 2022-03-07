#pragma once 
#include <iostream>

using namespace std;

class devise
{
    protected:
        double valeur;
        
    public:
        devise();
        devise(double valeur);
        devise(const devise &d);
        ~devise();

};