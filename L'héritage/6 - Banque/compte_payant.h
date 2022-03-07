#pragma once 
#include <iostream>
#include "compte.h"


using namespace std;

class compte_payant: public compte
{
    private:
        int taux_payant;
    public:
        compte_payant(int taux ,mad solde);
        compte_payant(const compte_payant &co);
        ~compte_payant();

        

};