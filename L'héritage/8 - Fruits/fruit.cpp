#include "fruit.h"
using namespace std;

fruit::fruit(string type, bool noyau)
{
    this->type = type;
    this->noyau = noyau;
}

fruit::fruit()
{
}

fruit::~fruit()
{
    cout << "dest de la classe fruit" << endl;
}

bool fruit::kernel() const
{
    return this->noyau;
}

string fruit::show_type() const
{
    return this->type;
}

void fruit::afficher() const
{
    cout << "Type : " << this->type;
    if(this->noyau)
        cout << "   Avec Noyau "<< endl;
    else
        cout << "   Sans Noyau " << endl;
    
}
