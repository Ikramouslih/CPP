#pragma once
typedef float T;
class tableau
{
    private:
    int taille;
    T *tab;

    public:
    tableau(int taille);
    tableau(const tableau& T)=delete;//recopie
    tableau& operator=(const tableau& t)=delete;//surcharge
    //interdiction de l'utilisation de ces methodes : considerer supprimée
    //pour éviter l'utilisation des méthodes par défaut ou implementées 
    //ex : prevention de faire des copies 
    T& operator[](int index);
    ~tableau();

};