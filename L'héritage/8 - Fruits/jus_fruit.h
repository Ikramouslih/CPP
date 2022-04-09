#pragma once
#include <vector>
#include "fruit.h"

using namespace std;

class jus_fruit : public fruit
{
private:
	vector<fruit*> list_fruit;
public:
	jus_fruit();
	~jus_fruit();
	bool kernel() const override;
	void ajouter(fruit* f);
	void afficher() const override;
	void afficher_avec_noyau() const;

};

