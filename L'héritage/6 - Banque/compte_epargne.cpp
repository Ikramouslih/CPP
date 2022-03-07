#include <iostream>
#include "compte_epargne.h"
#include <assert.h>

using namespace std;

compte_epargne::compte_epargne(int taux, mad solde):compte(solde)
{
    assert(taux>=0 && taux<=100);
    this->taux_interet = taux;
}

compte_epargne::~compte_epargne()
{
    cout<<"dest de la classe compte epargne"<<endl;
}

void compte_epargne::calcul_interet()
{
   // this->solde.devise::valeur = 
}