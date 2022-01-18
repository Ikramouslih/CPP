#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"

using namespace std;

int main()
{
    tableau T1(3);
    //tableau t2(t1); //interdit de faire de copie 
    tableborne T2(3,0,5);

    T1.operator[](0) = 1 ;//mere
    //T2.tableau::operator[](0) = 12; //private donc inaccessible


}