#include "compte.h"
#include "devise.h"
#include "client.h"
#include "operation.h"
using namespace std;

int compte::count = 0;

compte::compte(client* p, devise* s)
	:numCompte(++compte::count)
{	
	this->prop = p;
	this->solde = s;
	this->list_opera = vector<operation>();
}

compte::compte():numCompte(0)
{
	this->prop = NULL;
	this->solde = NULL;
}

bool compte::retirer(devise* montant)
{
	if (*(this->solde) >= *montant)
	{
		*(this->solde) = *(this->solde) - *montant;
		operation op("DD/MM/YYYY",montant,"-");
		this->list_opera.push_back(op);
		return true;
	}

	return false;
}

void compte::deposer(devise* montant)
{
	*(this->solde) = *(this->solde) + *montant;
	operation op("DD/MM/YYYY", montant, "+");
	this->list_opera.push_back(op);
}

bool compte::transferer(devise* montant, compte& c)
{
	if (this->retirer(montant))
	{
		c.deposer(montant);
		return true;
	}
	return false;
}

void compte::consulter_solde() const
{
	cout << "le solde est :";
	this->solde->afficher();
}

compte::~compte()
{
	//cout << "dest de la class compte" << endl;
	compte::count--;
}
