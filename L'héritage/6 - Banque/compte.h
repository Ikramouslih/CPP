#pragma once
#include <iostream>
#include <vector>
using namespace std;

class client;
class operation;
class devise;

class compte
{
    private:
        const int numCompte;
        static int count;
        client* prop;
        vector<operation> list_opera;

    protected:
        devise* solde;

    public:
        compte(client* p, devise* s);
        compte();
        virtual bool retirer(devise* montant);
        void deposer(devise* montant);
        bool transferer(devise* montant, compte& c);
        void consulter_solde()const;
        ~compte();

};

