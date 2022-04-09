#pragma once
#include <iostream>

using namespace std;

class fruit
{
private:
	string type;
	bool noyau;//1 si avec noyau // 0 sinon 
public:
	fruit(string type,bool noyau);
	fruit();
	~fruit();
	virtual bool kernel() const;
	string show_type() const;
	virtual void afficher() const;

};

