#include "voiture.h"
#include <iostream>
using namespace std;

voiture::voiture(int id, string mar, string mo , float k, int n ):vehicule(mar, mo , id)//litializer list
{
    cout<<"constructeur de la classe voiture"<<endl;
    this->km = k;
    this->nombreroue = n;
}

voiture::~voiture()
{

}
