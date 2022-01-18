#pragma once
#include <iostream>

using namespace std;

class employe
{
    public:
    employe(string nom, float indice);
    virtual float calcul_sal()const; 
    virtual void afficher() const;
    virtual ~employe();//destructeur virtual pour assurer le polymorphisme lors de la suppression des employes
    //dans le destructeur du personnel

    protected:
    string nom;
    float indice_sal;
    const int matricule;
    static int count;
    static float augmentation;
};