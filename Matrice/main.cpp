#include <iostream>
#include "matrice.h"

using namespace std;

int main()
{
    Matrice M1(3, 3);
    Matrice M2(3, 3);
    Matrice MS(3,3);

    M1.remplissage();
    M1.afficher();

    M2.remplissage();
    M2.afficher();

    MS = M1 + M2;
    MS.afficher();
}