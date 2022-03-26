#pragma once
#include "compte_epargne.h"
#include "compte_payant.h"
class compte_epargne_payant : public compte_epargne , public compte_payant
{
	private : 

	public :
		compte_epargne_payant(client* c, devise* s,double taux);
		~compte_epargne_payant();
		bool retirer(devise* montant) override;
};

