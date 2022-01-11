#include <iostream>
#include "vecteur.h"
using namespace Geo;
using namespace std;

int main()
{
    vecteur3d v1;
    vecteur3d v2(1,2,30);
    vecteur3d v3(v2);
    /*v1 = v2;// une erreur si on n'a pas la méthode de surcharge ==
    v1 = v1 ;//autoaffectation 
    //appele a la méthode operator= v1 va être suppr et recréer une autre fois mais cette fois avec des valeurs aléatoire
    */
    v1.afficher();
    v2.afficher();
    v3.afficher();
    std::cout<<v1.operator[](4);//assertion failed index >= 0 && index < 3 + ligne d'erreur
    v1.operator[](0) = 3;//c'est juste car c'est une methode pas acces direct (private)


    
    return 0;

}