#include <iostream>
#include "pile.h"

using namespace std;

pile::pile()
{
    this->sommet=nullptr;
}

void pile::empiler(element e)
{
    //e->get_next(this) = this->sommet;
    
    element * N = new element(e.data);
    N->next = this->sommet;
    this->sommet = N;
}

void pile::depiler()
{
    element* tmp=sommet;
    this->sommet = this->sommet->next;
    delete tmp;//supprime l'element pointé par tmp et pas le pointeur
    //le pointeur se supprime par le compilateur : c'est une variable local
}

bool pile::est_vide() const
{
    return (this->sommet==nullptr);
}

element* pile::top() const
{
    return this->sommet;
}

/*void pile::print()const
{//avec la logique des listes simplement chainées
    element * tmp=this->sommet;
    while(tmp !=nullptr)
    {
        tmp->affichage();
        tmp=tmp->next;
    }
}*/

void pile::print() 
{
    pile *p = new pile();

    while (this->sommet != nullptr)
    {
        p->empiler(*(this->sommet));
        this->sommet->affichage();
        this->depiler();
    }
    while(p->sommet != nullptr)
    {
        this->empiler(*(p->sommet));
        p->depiler();
        p->sommet = p->sommet->next;
    }

}
pile::~pile()
{
    cout<<"destructeur de la classe pile"<<endl;
    while(this->sommet != nullptr)
    {
        this->depiler();
    } 
}