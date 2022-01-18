#pragma once
#include "Tableau.h"

class tableborne : public tableau
{
    public:
    tableborne(int taille, T inf, T sup);
    ~tableborne();
    const T& operator[](int index);//const pour proteger les valeurs du tableau

    private:
    T inf , sup;
};