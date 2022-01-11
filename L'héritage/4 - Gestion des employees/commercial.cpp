#include "commercial.h"
#include <iostream>

using namespace std;

commercial::commercial(string nom, float indice , float vente_m)
            : employe(nom,indice)
{
    this->vente_mois = vente_m;
}

void commercial::miseajour(float vente_jour)
{
    this->vente_mois += vente_jour;
}

float commercial::calcul_sal() const
{
    float salaire_mois;
    salaire_mois = this->indice_sal + this->vente_mois * 0.05; //5% des ventes total
    return salaire_mois;
}

commercial::~commercial()
{
    cout<<"destructeur de la classe commercial"<<endl;
}