#include <iostream>
#include "pile.h"
#include "element.h"

using namespace std;

int main()
{
    element<int> e1(11);
    element<int> e2(13);
    element<int> e3(14);
    element<int> e4(16);
    pile<int>* p1 = new pile<int>();


    cout << p1->est_vide() << endl;
    cout << endl;

    p1->empiler(e1);
    p1->empiler(e2);
    p1->empiler(e3);
    p1->empiler(e4);
    p1->print();
    cout << endl;

    (p1->top())->affichage();
    cout << endl;

    p1->depiler();
    p1->print();
    cout << endl;









}

