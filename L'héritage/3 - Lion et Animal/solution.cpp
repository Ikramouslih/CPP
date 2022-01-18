#include <iostream>
#include "lion.h"
#include "liger.h"
using namespace std;

int main()
{   
    //virtuel + creation dynamique ===> polymorphisme at run time

    animal *a1 = new animal("animal1");
    lion *l1 = new lion("lion", "brown");
    liger *g1 = new liger("liger1","black",123);

    cout<<sizeof(*a1)<<endl;//avant virtual : 40 // apres virtual : 48
    cout<<sizeof(*l1)<<endl;//avant virtual : 80 // apres virtual : 88
    cout<<sizeof(*g1)<<endl;//avant virtual : 88 // apres virtual : 96
    

    a1->manger();//animal
    a1 = l1;
    a1->manger();//lion
    a1 = g1;
    a1->manger();//liger


} 