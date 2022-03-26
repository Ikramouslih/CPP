#include "compte_courant.h"
#include "devise.h"

using namespace std;

compte_courant::compte_courant(client* c, devise* s, devise* decouvert)
    :compte(c,s)
{
    this->decouvert = decouvert;
}

compte_courant::~compte_courant()
{
    cout << "dest de la classe compte_courant" << endl;
}

bool compte_courant::retirer(devise* montant)
{
    if(*(this->solde) - *(this->decouvert) >= *montant)
    {
        return this->compte::retirer(montant);
    }
    return false;
}
