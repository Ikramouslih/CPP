#include "responsable.h"
#include "employe.h"
#include "personnel.h"
#include "commercial.h"
#include <iostream>

using namespace std;

int main()
{
    responsable *ceo = new responsable("ceo",300,"ceo");
    responsable *r1 = new responsable("resp1",200,"chef equipe");
    employe *e2 = new employe("emp2",100);
    employe *e3= new employe("emp3",100);
    commercial *c1 = new commercial("commerc1",200,500);
    commercial *c2 = new commercial("commerc2",200,250);
    personnel *p = new personnel();

    r1->add_subord(e3);//       ceo
    ceo->add_subord(r1);// r1          e2
    ceo->add_subord(e2);//       e3
    ceo->afficher();//affiche le ceo et ses subords directs et indirectds

    c1->miseajour(25);
    c2->miseajour(23);
    
    cout<<"salaire de ce commercial selon ses ventes"<<c1->calcul_sal()<<endl;
    cout<<"salaire de ce commercial selon ses ventes"<<c2->calcul_sal()<<endl;

    p->add_employe(ceo);
    p->add_employe(r1);
    p->add_employe(e2);
    p->add_employe(e3);
    p->add_employe(c1);
    p->add_employe(c2);

    
    float salaire_total = p->somme_sal();

    cout<<"le salaire total a distribuer est :"<<salaire_total<<endl;




}