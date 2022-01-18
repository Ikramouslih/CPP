#include <iostream>
#include "heure.h"
#include "DateH.h"

int main()
{
    Heure* H1 = new Heure(16,45,30);
    DateH *D1 = new DateH(16,45,50,4,1,2022);

    H1->print();
    D1->print();

    std::cout<<H1->operator>(*D1)<<std::endl;
    std::cout<<D1->Heure::operator>(*H1)<<std::endl;//demasquage
    std::cout<<D1->operator>(*D1)<<std::endl;

    std::cout<<D1->maxdays()<<std::endl;

}