#pragma once
#include <iostream>

using namespace std;

class employe
{
    public:
    employe(string nom, float indice);
    virtual float calcul_sal()const; 
    virtual void afficher() const;
    ~employe();

    protected:
    string nom;
    float indice_sal;
    const int matricule;
    static int count;
    static float augmentation;
};