#pragma once 
#include <iostream>
#include "devise.h"

using namespace std;

class eur : public devise
{
    private:
        const string symbole;
        
    public:
        eur(string symbole = "€");
        eur(const eur &e);
        ~eur();

};