#pragma once
#include <iostream>

#include "vehicule.h"

class voiture : public vehicule //relation d'heritage 
{
private:
    float km;
    int nombreroue;
public:
    voiture(int id, string mar, string mo ,float,int);
    ~voiture();
};

