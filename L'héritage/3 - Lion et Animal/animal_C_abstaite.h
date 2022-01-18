#pragma once 
#include <string>
using namespace std;

class animal//classe abstraite = au moins une methode virtuel pure
//pas de creation des objets à partir de cette classe
//modele pour les classes filles : sert simplement à être ériter 
{
    protected:
    string nom;

    public:
    animal();
    animal(string n);
    //consructeur içi utilisé seulement à partir d'un constructeur d'une classe fille (lion::lion(string n, string color) : animal(n))
    ~animal();
    virtual void manger() const;//usage du mot clé virtual pour redéfinir la methode
    void afficher() const;
    virtual void marcher() = 0;//methode sans corps - purement virtuel - abstraite/abstract
                                //implementation = 0
};

//une classe possede que les methodes virtuel pures = une interface
