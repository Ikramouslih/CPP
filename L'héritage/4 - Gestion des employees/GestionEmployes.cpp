#include "responsable.h"
#include "employe.h"
#include "personnel.h"
#include <iostream>

using namespace std;

int main()
{
    responsable *ceo = new responsable("ceo",300,"ceo");
    responsable *r1 = new responsable("resp1",200,"chef equipe");
    employe *e2 = new employe("emp2",100);
    employe *e3= new employe("emp3",100);
    personnel *p;

    p->ajout_employe(ceo);
    p->ajout_employe(r1);
    p->ajout_employe(e2);
    p->ajout_employe(e3);
    

    r1->add_subord(e3);//       ceo
    ceo->add_subord(r1);// r1          e2
    ceo->add_subord(e2);//       e3

    ceo->afficher();//affiche le ceo et ses subords directs et indirectds



}