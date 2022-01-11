#include <iostream>
#include "lion.h"
using namespace std;

int main()
{
    animal a1("animal1");
    lion l1("lion", "brown");

    a1.manger();//animal
    l1.manger();//lion

    a1 = l1;//logiquement a1 devient lion
    
    a1.manger();//mais on appl tjrs la methode de animal
    //probleme logic : si on affect l1 a a1 donc a1 doit devenir un lion , 
    //mais elle fait tjrs l'appl de la methode manger de animal

} 