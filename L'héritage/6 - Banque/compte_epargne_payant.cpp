#include "compte_epargne_payant.h"
#include "devise.h"
using namespace std;

compte_epargne_payant::compte_epargne_payant(client* c, devise* s, double taux)
            :compte(c,s),compte_epargne(c,s,taux),compte_payant(c,s)
{
}

compte_epargne_payant::~compte_epargne_payant()
{
    cout << "dest de la classe compte_epargne_payant" << endl;
}

bool compte_epargne_payant::retirer(devise* montant)
{
    if (this->compte_epargne::retirer(montant))
    {
        return this->compte_payant::retirer(montant);
    }
}
