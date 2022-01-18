#include <iostream>
#include "TableauBorne.h"

using namespace std;

tableborne::tableborne(int taille, T inf , T sup)
            :tableau(taille)
{
    if(inf > sup)
    {
        this->sup = inf;
        this->inf = sup;
    }
    else
    {
        this->sup = sup;
        this->inf = inf;
    }

}

const T&  tableborne::operator[](int index)
{
    return this->tableau::operator[](index);
}

tableborne::~tableborne()
{
    cout<<"destructeur de la classe tableborne"<<endl;
}