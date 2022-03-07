#pragma once 
#include <iostream>
#include "mad.h"

using namespace std;

class operation
{
    private:
        const int numero;
        static int count;
        string date;
        mad montant;
        string libelle;
    public:
        operation();
        operation(string date, mad montant, string libelle);
        ~operation();
        operation(const operation &o);
        void afficher_op();
};