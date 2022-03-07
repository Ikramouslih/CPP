#pragma once 
#include <iostream>
#include <vector>
#include "compte.h"

using namespace std;

class client
{
    private:
       string nom;
       string prenom;
       string adresse;
       vector<compte*> listcompte; 
    public:
        client();
        client(string nom, string prenom, string adresse);
        virtual ~client();
        client(const client &cl);

        void afficher_client_min();//affichage sans listcompte
        void afficher_details_client();//affichage detaillé d'un client
        void add_compte(compte *co);

};