#include <iostream>
#include "compte_payant.h"
#include <assert.h>

using namespace std;

compte_payant::compte_payant(int taux, mad solde):compte(solde)
{
    this->taux_payant = taux;
}

compte_payant::~compte_payant()
{
    cout<<"dest de la classe compte payant"<<endl;
}

