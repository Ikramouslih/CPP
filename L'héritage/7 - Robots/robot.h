#pragma once
#include <iostream>
using namespace std;
class Go;
class robot
{
private:
	static int count;
	const int id;
	string nom;
	int vitesse;
	Go* ram;
public:
	robot(string nom, int vitesse, Go* ram);
	~robot();
	void connecter()const;
	virtual void display()const;
	bool sup200()const;



};

