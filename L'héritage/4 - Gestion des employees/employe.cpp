#include "employe.h"

int employe::count = 0;//un attribut const qui doit être initialiser avant d'entrer au constructeur
float employe::augmentation = 50;


employe::employe(string nom, float indice)
        :matricule(++employe::count)//incrementer puis affecter
        //count est static (attribut de class et pas d'objet courant) donc employe::count
{
    this->nom = nom;
    this->indice_sal = indice;
}

void employe::afficher() const
{
    std::cout <<"nom:"<<this->nom<<std::endl;
    std::cout <<"matricule:"<<this->matricule<<std::endl;
    std::cout <<"indice_sal:"<<this->indice_sal<<std::endl;
    std::cout <<"augmentation:"<<employe::augmentation<<std::endl;
}
float employe::calcul_sal() const
{
    float salaire = this->indice_sal * employe::augmentation;
    return salaire;
} 

employe::~employe()
{
    std::cout <<"destructeur de la classe employe"<<std::endl;
}