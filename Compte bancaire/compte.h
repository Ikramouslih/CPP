#include <iostream>
namespace banque
{
    class Compte
    {
    private:
        int numCompte;
        char* nomProprietaire;
        double solde; 
    public:
        Compte();
        Compte(int num , char* nom , double sold);
        bool retirerArgent(double s);
        void deposerArgent(double s);
        void consulterSolde();
        bool transfererArgent(Compte *c , double s);
    };
    

    
}