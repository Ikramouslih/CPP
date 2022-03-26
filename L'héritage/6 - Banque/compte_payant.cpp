#include "compte_payant.h"
#include "devise.h"
using namespace std;

double compte_payant::taux_payment = 5;

compte_payant::compte_payant(client* p, devise* s)
    :compte(p,s)
{
}

compte_payant::~compte_payant()
{
    cout << "dest de la classe compte_payant" << endl;
}

bool compte_payant::retirer(devise* montant)
{
    devise res = *montant + *montant * (compte_payant::taux_payment/100);
    return this->compte::retirer(&res);

}
