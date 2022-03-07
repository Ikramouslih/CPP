#pragma once 
#include <iostream>
#include "devise.h"

using namespace std;

class mad : public devise
{
    private:
        const string symbole = "MAD";
        
    public:
        mad();
        mad(double valeur);
        ~mad();
        mad operator-=(const mad &d);
        mad operator+=(const mad &d);
        bool operator>=(const mad &d);
        mad& operator=(const mad &d);
        string get_symbole()const;
        double get_solde()const;

        
};