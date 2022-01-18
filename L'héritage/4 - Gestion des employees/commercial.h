#pragma once
#include "employe.h"
#include <iostream>

using namespace std;

class commercial : public employe
{
    public:
    commercial(string nom, float indice , int vente_m);
    void miseajour(int vente_jour);
    float calcul_sal() const override;
    ~commercial();

    private:
    int vente_mois;
    


};