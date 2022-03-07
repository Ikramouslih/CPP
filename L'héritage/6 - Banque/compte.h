#pragma once 
#include <iostream>
#include <vector>
#include "client.h"
#include "operation.h"
#include "devise.h"
#include "mad.h"

using namespace std;

class compte
{
    protected:
        static int count; 
        const int Ncompte;
        vector<client*> listpropr; 
        mad solde;
        vector<operation*> listoperation;
    
    public:
        compte(mad solde);
        compte();
        virtual ~compte();

        void add_propri(client *cl);

        bool retirerArgent(mad s);
        void deposerArgent(mad s);
        void consulterSolde()const;//affichage 
        bool transfererArgent(compte *co , mad s);
        void afficher_historique()const;
        
       

};
