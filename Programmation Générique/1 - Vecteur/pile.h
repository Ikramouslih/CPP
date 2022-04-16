#pragma once
using namespace std;

template<class T> class element;

template<class T>
class pile
{
private:
    element<T>* sommet;
public:
    pile();
    void empiler(element<T> e);
    void depiler();
    bool est_vide()const;
    void print();
    element<T>* top()const;
    ~pile();


};

template<class T>
pile<T>::pile()
{
    this->sommet = NULL;
}

template<class T>
void pile<T>::empiler(element<T> e)
{
    element<T>* N = new element<T>(e.data);
    N->next = this->sommet;
    this->sommet = N;
}

template<class T>
void pile<T>::depiler()
{
    element<T>* tmp = this->sommet;
    this->sommet = this->sommet->next;
    delete tmp;
}

template<class T>
bool pile<T>::est_vide() const
{
    return (this->sommet == nullptr);
}

template<class T>
void pile<T>::print()
{
    pile<T>* p = new pile<T>();

    while (this->sommet != nullptr)
    {
        p->empiler(*(this->sommet));
        this->sommet->affichage();
        this->depiler();
    }
    while (p->sommet != nullptr)
    {
        this->empiler(*(p->sommet));
        p->depiler();
        //p->sommet = p->sommet->next;
    }

}

template<class T>
element<T>* pile<T>::top() const
{
    return this->sommet;
}

template<class T>
pile<T>::~pile()
{
    cout << "destructeur de la classe pile" << endl;
    while (this->sommet != nullptr)
    {
        this->depiler();
    }
}
