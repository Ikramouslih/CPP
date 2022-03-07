#include <iostream>
#include "compte_courant.h"
#include <assert.h>

using namespace std;

compte_courant::compte_courant(double dec, mad solde):compte(solde)
{
    this->decouvert = dec;
}

compte_courant::~compte_courant()
{
    cout<<"dest de la classe compte courant"<<endl;
}

