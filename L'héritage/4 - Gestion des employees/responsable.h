#pragma once
#include "employe.h"
#include <iostream>
#include <vector>

using namespace std;

class responsable : public employe
{
    public:
    responsable(string nom, float indice, string status);
    void afficher() const override;//redéfinition
    void add_subord(employe *e);
    ~responsable();

    private:
    
    string status;
    vector<employe*> subor;//employe **subord;
    //donne un tableau dont la taille s'incremente auto
    //double * pour assurer la creation dynamique pour le polymorphisme

};