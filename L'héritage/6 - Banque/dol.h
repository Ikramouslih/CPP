#pragma once 
#include <iostream>
#include "devise.h"

using namespace std;

class dol : public devise
{
    private:
        const string symbole;
        
    public:
        dol(string symbole = "$");
        dol(const dol &e);
        ~dol();

};