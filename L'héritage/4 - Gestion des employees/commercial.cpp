#include "commercial.h"
#include <iostream>

using namespace std;

commercial::commercial(string nom, float indice , int vente_m)
            : employe(nom,indice)
{
    this->vente_mois = vente_m;
}

void commercial::miseajour(int vente_jour)
{
    this->vente_mois += vente_jour;
}

float commercial::calcul_sal() const
{
    float salaire = this->employe::calcul_sal() + this->vente_mois/100;
    return salaire;
}

commercial::~commercial()
{
    cout<<"destructeur de la classe commercial"<<endl;
}