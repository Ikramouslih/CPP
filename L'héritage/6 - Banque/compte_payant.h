#pragma once
#include "compte.h"
using namespace std;

class compte_payant : virtual public compte
{
    private:
        static double taux_payment;
    public:
        compte_payant(client* p, devise* s);
        ~compte_payant();
        bool retirer(devise* montant) override;

};

