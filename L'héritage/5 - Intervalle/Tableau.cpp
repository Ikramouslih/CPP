#include <iostream>
#include "Tableau.h"

using namespace std;

tableau::tableau(int taille)
{
    this->taille = taille;
    this->tab = new T[this->taille];
}

T& tableau::operator[](int index)
{
    assert(index >= 0 && index < this->taille);
    return this->tab[index];

}

tableau::~tableau()
{
    delete[] this->tab;
    this->tab =0;
}
