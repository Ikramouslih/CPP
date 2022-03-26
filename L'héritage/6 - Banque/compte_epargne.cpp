#include "compte_epargne.h"
#include "devise.h"
#include <assert.h>
using namespace std;

compte_epargne::compte_epargne(client* p, devise* s, double taux)
	:compte(p,s)
{
	assert(taux >= 0 && taux <= 100);
	this->taux_interet = taux;
}

compte_epargne::compte_epargne():compte()
{
	this->taux_interet = NULL;
}

compte_epargne::~compte_epargne()
{
	//cout << "dest de la classe compte_epargne" << endl;
}

void compte_epargne::calcul_interet()
{
	devise *taux = new devise( * (this->solde) * (this->taux_interet / 100));
	this->deposer(taux);
}

bool compte_epargne::retirer(devise* montant)
{

	if (*(this->solde) / 2 >= (*montant))
	{
		compte_epargne ce;
		if (typeid(*this).name() == typeid(ce).name())
		{
			return this->compte::retirer(montant);
		}
		return true;
		
		
	}
	return false;
}
