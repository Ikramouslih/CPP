#include "responsable.h"
#include <string>
using namespace std;

responsable::responsable(string nom, float indice, string status)
            :employe(nom,indice)
{
    this->status = status;
    this->subor = vector<employe*>();//vecteur des employes de taille 0

} 

void responsable::afficher() const
{
    this->employe::afficher();
    cout <<"status:"<<this->status<<endl;
    for(int i=0 ; i < this->subor.size() ; i++)
    {
        this->subor[i]->afficher();//polymorphisme

    }
}

responsable::~responsable()
{
    //aggregation faible
    this->subor.clear();
}

//vector<type>();
//clear();
//pushback();
//size();

void responsable::add_subord(employe *e)
{
    this->subor.push_back(e);
}
