#pragma once
#include "animal.h"
#include <string>
using namespace std;
//héritage simple
class lion : public animal
{
    public : 
    lion(string n, string color);
    void afficher() const;//masquage
    void manger() const override;//redéfinition avec mot cle override (facultatif)
    ~lion();

    private:
    string color;

};