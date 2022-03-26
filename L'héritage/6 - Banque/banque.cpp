#include <iostream>
#include "compte.h"
#include "devise.h"
#include "client.h"
#include "compte_epargne.h"
#include "compte_courant.h"
#include "compte_payant.h"
#include "compte_epargne_payant.h"

using namespace std;

int main()
{
    client* cl = new client("Ikram","Mouslih","adr_cl");
    devise* s = new devise(2000.00);
    devise* s1 = new devise(100.00);
    devise* s2 = new devise(2500);
    compte* c1 = new compte(cl, s);
    compte_epargne* ce = new compte_epargne(cl,s,2);
    compte_courant* cc = new compte_courant(cl,s,s1);
    compte_payant* cp = new compte_payant(cl, s);
    compte_epargne_payant* cep = new compte_epargne_payant(cl, s, 5);

    cl->afficher();
    c1->consulter_solde();
    cout << endl;

    c1->deposer(s1);
    cout << "Apres depot (compte epargne) :" << endl;
    ce->consulter_solde();
    cout << endl;
    
    
    ce->calcul_interet();
    cout << "Apres interet (compte epargne) :" << endl;
    ce->consulter_solde();
    cout << endl;


    cout << "Status : " << ce->retirer(s1) << endl;
    cout << "Apres retrait (compte epargne) :" << endl;
    ce->consulter_solde();
    cout << "Status : " << ce->retirer(s2) << endl;
    cout << "Apres retrait (compte epargne) :" << endl;
    ce->consulter_solde();
    cout << endl;


    cout << "Status : " << cc->retirer(s1) << endl;
    cout << "Apres retrait (compte courant) :" << endl;
    cc->consulter_solde(); 
    cout << "Status : " << cc->retirer(s2) << endl;
    cout << "Apres retrait (compte courant) :" << endl;
    cc->consulter_solde();
    cout << endl;



    cout << "Status : " << cp->retirer(s1)<< endl;
    cout << "Apres retrait (compte payant) :" << endl;
    cp->consulter_solde();
    cout << "Status : " << cp->retirer(s2) << endl;
    cout << "Apres retrait (compte payant) :" << endl;
    cp->consulter_solde();
    cout << endl;


    cout << "Status : " << cep->retirer(s1) << endl;
    cout << "Apres retrait (compte epargne payant) :" << endl;
    cep->consulter_solde();
    cout << "Status : " << cep->retirer(s2) << endl;
    cout << "Apres retrait (compte epargne payant) :" << endl;
    cep->consulter_solde();
    cout << endl;
    


   
    
}