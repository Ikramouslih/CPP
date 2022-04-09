#include "jus_fruit.h"

using namespace std;

jus_fruit::jus_fruit() : fruit()
{
    this->list_fruit = vector<fruit*>();
}

jus_fruit::~jus_fruit()
{
    cout << "dest de la classe jus_fruit" << endl;
    this->list_fruit.clear();
}

bool jus_fruit::kernel() const
{
    for (int i = 0; i < this->list_fruit.size(); i++)
    {
        if (this->list_fruit[i]->fruit::kernel() == false)
            return false;
    }
    return true;
}

void jus_fruit::ajouter(fruit* f)
{
    this->list_fruit.push_back(f);
}

void jus_fruit::afficher() const
{
    cout << "Jus" << endl;
    for (int i = 0; i < this->list_fruit.size(); i++)
    {
        this->list_fruit[i]->afficher();
    }
}

void jus_fruit::afficher_avec_noyau() const
{
    for(int i=0 ; i<this->list_fruit.size();i++)
    {
        if (this->list_fruit[i]->kernel())
            this->list_fruit[i]->afficher();
    }
}