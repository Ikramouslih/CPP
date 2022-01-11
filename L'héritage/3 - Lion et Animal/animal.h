#pragma once 
#include <string>
using namespace std;

class animal
{
    protected:
    string nom;

    public:
    animal();//pour le zoo
    animal(string n);
    ~animal();
    virtual void manger() const;//usage du mot clé virtual pour redéfinir la methode
    void afficher() const;

};

