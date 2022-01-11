#include <iostream>
#include "vecteur.h"
#include <assert.h>

using namespace Geo;

vecteur3d::vecteur3d(float x, float y, float z)
{
    this->vect = new float[3];
    this->vect[0] = x;
    this->vect[1] = y;
    this->vect[2] = z;
}

vecteur3d::vecteur3d(const vecteur3d &v)
{
    this->vect = new float[3];
    this->vect[0] = v.vect[0];
    this->vect[1] = v.vect[1];
    this->vect[2] = v.vect[2];
}

void vecteur3d::afficher() const
{
    std::cout<<"x="<<this->vect[0]<<"y="<<this->vect[1]<<"z="<<this->vect[2]<<std::endl;
}
  
bool vecteur3d::operator==(const vecteur3d &v) const
{
    bool res = true;

    for(int i=0 ; i < 3 ; i++)
    {
        res = res && (this->vect[i] == v.vect[i]);
    }

    return res;
}

 bool vecteur3d::operator!=(const vecteur3d &v) const
 {
       /* if(this->operator==(v) == true)
        {
            return false;
        }
        return true;*/
        return !(this->operator==(v));
 }

 vecteur3d::~vecteur3d()
 {
     delete[] this->vect;
     this->vect = 0;
 }

 vecteur3d& vecteur3d::operator=(const vecteur3d &v)
 {
     //on a la possiblité de travailler dans le meme tableau sans supp le tab si les 2 vecteurs ont la meme dimension 
     //la solution globale est de le supprimer et créer un autre
    if(this != &v)//deux objets differents si les adresses des objets est differentes
    {
        delete[] this->vect;
        this->vect = new float[3];
        for(int i = 0 ; i < 3 ; i++)
        {
          this->vect[i] = v.vect[i];
        }
    }
    //else auto-affectation== (this==&v0)
    return *this;//return l'objet réel (*this est le contenu qui est l'objet)
    //on n'a pas fait *this->vect car this->vect est un float et pas vecteur3d
 }


 float& vecteur3d::operator[](int index)//passage par reference pour modifier en vérité la valeur de la case du tab
 //meme si on fait un const au niveau de la méthode ça reste juste même si le but est de modifier 
 //car on modifie en dehors de la methode et pas dedans
 {  
    assert(index >= 0 && index < 3);//en mode debug utiliser dans le cas de return inconnu ou erreur de returner 
    return this->vect[index];

 }

 vecteur3d vecteur3d::somme(vecteur3d &v) const
 {
     vecteur3d somme;
     for(int i = 0 ; i < 3 ; i++)
     {
         somme.vect[i] = v.vect[i] + this->vect[i];
     }
     return somme;
     /*vecteur3d somme(this->vect[0]+v.vect[0],this->vect[1]+v.vect[1],this->vect[2]+v.vect[2]);
     return somme;*/
 }

 vecteur3d vecteur3d::prodscal(int a) const
 {
     vecteur3d scal;
     for(int i = 0 ; i < 3 ; i++)
     {
         scal.vect[i] = this->vect[i] * a;
     }
     return scal;
     /*vecteur3d prod(this->vect[0]*a,this->vect[1]*a,this->vect[2]*a);
     return prod;*/
 }
