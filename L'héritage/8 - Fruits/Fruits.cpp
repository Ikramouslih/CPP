#include <iostream>
#include "fruit.h"
#include "salade_fruit.h"
#include "jus_fruit.h"

using namespace std;

void afficher_fruit_jus(jus_fruit& F)
{
    F.afficher_avec_noyau();
}

int main()
{
    fruit* f1 = new fruit("Banane",0);
    fruit* f2 = new fruit("Kiwi",1);
    fruit* f3 = new fruit("Fraise",0);
    fruit* f4 = new fruit("Orange",0);
    fruit* f5 = new fruit("Pomme",1);
    fruit* f6 = new fruit("Avoca",1);

    salade_fruit* S1 = new salade_fruit();
    salade_fruit* S2 = new salade_fruit();

    jus_fruit* J1 = new jus_fruit();

    

    S1->ajouter(f1);
    S1->ajouter(f2);
    S1->ajouter(f3);


    J1->ajouter(f1);
    J1->ajouter(f4);
    J1->ajouter(f6);

    S2->ajouter(f4);
    S2->ajouter(f5);
    S2->ajouter(f6);
    S2->ajouter(S1);
    S2->ajouter(J1);

    cout << "Salade N1 :" << endl;
    S1->afficher();
    cout << "--------------" << endl;
    cout << "Jus N1 :" << endl;
    J1->afficher();
    cout << "--------------" << endl;
    cout << "Salade N2 :" << endl;
    S2->afficher();
    cout << "--------------" << endl;

    cout << "Les fruits avec Noyau dans le jus J1" << endl;
    afficher_fruit_jus(*J1);
 



}
