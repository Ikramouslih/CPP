#include <iostream>
#include "operation.h"
using namespace std;

int operation::count = 0;

operation::operation(string date, mad montant, string libelle)
            :numero(++operation::count)
{
    this->libelle = libelle;
    this->montant = montant;
    this->date = date;
}

operation::~operation()
{
    cout<<"dest de la classe operation"<<endl;
}

void operation::afficher_op()
{
    cout<<"Numero d'operation : "<<this->numero;
    cout<<"  Date : "<<this->date;
    cout<< "  Montant : "<<this->montant.devise::get_solde();
    cout<<this->montant.get_symbole();
    cout<<"  Libellé : "<<this->libelle<<endl;
}