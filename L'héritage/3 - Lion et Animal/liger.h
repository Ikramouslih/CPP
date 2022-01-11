#pragma once
#include "lion.h"
//héritage héarchique
class liger : public lion
{
    public : 
    liger(string n, string c , int t);
    void manger() const override; //redéfinition 
    ~liger();

    private:
    int taille;

};