#pragma once
#include <iostream>
#include "fruit.h"
#include <vector>
using namespace std;

class salade_fruit : public fruit
{
private:
	vector<fruit*> list_fruit;
public:
	salade_fruit();
	~salade_fruit();
	bool kernel() const override;
	void ajouter(fruit *f);
	void afficher() const override;

};

