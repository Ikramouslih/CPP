#pragma once 
#include <iostream>
#include "compte.h"


using namespace std;

class compte_epargne : public compte
{
    private:
        int taux_interet;
    public:
        compte_epargne();
        compte_epargne(int taux, mad solde);
        compte_epargne(const compte_epargne &co);
        ~compte_epargne();

        void calcul_interet();

};