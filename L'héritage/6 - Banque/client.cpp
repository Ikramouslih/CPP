#include <iostream>
#include "app_banque.h"

using namespace std;

client::client(string nom, string prenom, string adresse)
{
        this->listcompte = vector<compte*>();
}

client::~client()
{
    this->listcompte.clear();
}

void client::afficher_client_min()
{
    cout<<"Nom : "<<this->nom;
    cout<<"  Prenom : "<<this->prenom;
    cout<<"  Adresse : "<<this->adresse<<endl;
}

void client::afficher_details_client()
{
    cout<<"Nom :"<<this->nom<<endl;
    cout<<"Prenom :"<<this->prenom<<endl;
    cout<<"Adresse :"<<this->adresse<<endl;
    cout<<"Comptes :"<<endl;
    for(int i=0 ; i<this->listcompte.size();i++)
    {
        this->listcompte[i]->consulterSolde();
    }
}

void client::add_compte(compte *co)
{
    this->listcompte.push_back(co);
}
