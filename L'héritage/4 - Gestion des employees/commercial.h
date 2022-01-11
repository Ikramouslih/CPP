#pragma once
#include "employe.h"
#include <iostream>

using namespace std;

class commercial : public employe
{
    public:
    commercial(string nom, float indice , float vente_m);
    void miseajour(float vente_jour);
    float calcul_sal() const override;
    ~commercial();

    private:
    float vente_mois;
    


};