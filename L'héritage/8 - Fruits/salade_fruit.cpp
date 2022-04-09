#include "salade_fruit.h"
using namespace std;

salade_fruit::salade_fruit():fruit()
{
	this->list_fruit = vector<fruit*>();
}

salade_fruit::~salade_fruit()
{
	cout << "dest de la classe salade de fruit" << endl;
	this->list_fruit.clear();

}

bool salade_fruit::kernel() const
{

	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		if (this->list_fruit[i]->fruit::kernel() == false)
			return false;
	}
	return true;
}

void salade_fruit::ajouter(fruit *f)
{
	this->list_fruit.push_back(f);
}

void salade_fruit::afficher() const
{
	cout << "Salade" << endl;
	for (int i = 0; i < this->list_fruit.size(); i++)
	{
		this->list_fruit[i]->afficher();
	}
}
