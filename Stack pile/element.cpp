#include <iostream>
#include "element.h"
using namespace std;

element::element(T data)
{
    this->data = data;
    this->next = nullptr;
}
   
void element::affichage() const
{
    cout<<this->data <<endl;
}


element::~element()
{
    cout<<"destructeur de la classe element"<<endl;
}


/*element* element::get_next()const
{
    return this->next;
}

void element::set_data(T NV)
{
    this->data = NV;
}
T element::get_data() const
{
    return this->data;
}
*/