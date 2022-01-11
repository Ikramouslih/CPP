#include <iostream>
#include "compte.h"
#include <string>

using namespace banque;

Compte::Compte(){
    this->numCompte = 0;
    this->solde = 0;
    strcpy(nomProprietaire,"NULL");
} 
Compte::Compte(int num , char* nom , double sold)
{
    this->numCompte = num;
    this->solde = sold;
    strcpy(nomProprietaire,nom);
}

bool Compte::retirerArgent(double s)
{
    if(this->solde >= s)
    {
        this->solde -= s;
        return true; 
    } 
    return false;
}

void Compte::deposerArgent(double s)
{
    this->solde += s;
}

void Compte::consulterSolde()
{
    std::cout << "Numero de compte : " << this->numCompte << std::endl;
    std::cout << "Nom : " << this->nomProprietaire << std::endl;
    std::cout << "Solde : " << this->solde << std::endl;
}

bool Compte::transfererArgent(Compte *c , double s)
{
    if(this->solde >= s)
    {
        this->solde -= s;
        c->solde += s;
        return true;
    }
    return false;
}

int main()
{   
    
    Compte A(1,"Ikram Mouslih",0);
    Compte B(2,"YODA",0);
    bool aide;


    A.deposerArgent(10000);
    A.consulterSolde();

    std::cout << "\n" << std::endl;

    aide = A.retirerArgent(500);
    std::cout << aide << std::endl;
    A.consulterSolde();
    aide = A.retirerArgent(100000);
    std::cout << aide << std::endl;
    A.consulterSolde();
    

    std::cout << "\n" << std::endl;


    aide = A.transfererArgent(&B,500);
    std::cout << aide << std::endl;
    A.consulterSolde();
    B.consulterSolde();



    


    return 0;

}