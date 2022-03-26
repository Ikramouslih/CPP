#pragma once
#include "compte.h"
using namespace std;

class compte_epargne : virtual public compte
{
	private:
		double taux_interet;
    public:
		compte_epargne(client* p, devise* s,double taux);
		compte_epargne();
		~compte_epargne();
		void calcul_interet();
		bool retirer(devise* montant) override;

};

