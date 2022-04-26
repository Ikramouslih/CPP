#pragma once
#include <iostream>
#include "pile.h"

using namespace std;

template <class T>
class element
{
private:
    T data;
    element<T>* next;
public:
    element(T data);
    void affichage() const;
    ~element();
    template<class T> friend class pile;
};

template<class T>
element<T>::element(T data)
{
    this->data = data;
    this->next = nullptr;
}

template<class T>
void element<T>::affichage() const
{
    cout << this->data << endl;
}

template<class T>
element<T>::~element()
{
    //cout << "destructeur de la classe element" << endl;
}
