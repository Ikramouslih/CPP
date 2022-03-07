#include <iostream>
#include "compte.h"
#include <string>

using namespace std;

int compte::count = 0;

compte::compte(mad solde):Ncompte(++compte::count)
{
    this->solde = solde;
    this->listpropr = vector<client*>();
    this->listoperation = vector<operation*>();
}

bool compte::retirerArgent(mad s)
{
    if(this->solde >= s)
    {
        this->solde -= s;
        operation *op = new operation("date d'aujourdhui", s, "retrait");
        this->listoperation.push_back(op);
        return true; 
    } 
    return false;
}

void compte::deposerArgent(mad s)
{
    this->solde += s;
    operation *op = new operation("date d'aujourdhui", s, "depot");
    this->listoperation.push_back(op);
}

void compte::consulterSolde()const
{
    cout << "Numero de compte : " << this->Ncompte << endl;
    cout << "les proprietaires : " << endl;
    for(int i=0 ; i<this->listpropr.size() ; i++)
    {
        this->listpropr[i]->afficher_client_min();
    }
    cout << "Solde :" << this->solde.get_solde();
    cout << this->solde.get_symbole() << endl;
}


bool compte::transfererArgent(compte *c , mad s)
{
    if(this->solde >= s)
    {
        this->solde -= s;
        c->solde += s;
        operation *op = new operation("date d'aujourdhui", s, "transfert");
        this->listoperation.push_back(op);
        return true;
    }
    return false;
}

void compte::add_propri(client *cl)
{
    this->listpropr.push_back(cl);
}

compte::~compte()
{
    this->listoperation.clear();
    this->listpropr.clear();
}

void compte::afficher_historique()const
{
    cout<<"Historique"<<endl;
    for(int i=0 ; i<this->listoperation.size() ; i++)
    {
        this->listoperation[i]->afficher_op();
    }
}

