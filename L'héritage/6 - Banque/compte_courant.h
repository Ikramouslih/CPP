#pragma once 
#include <iostream>
#include "compte.h"


using namespace std;

class compte_courant: public compte
{
    private:
        double decouvert;
    public:
        compte_courant(double dec,mad solde);
        compte_courant();
        compte_courant(const compte_courant &co);
        ~compte_courant();

        

};