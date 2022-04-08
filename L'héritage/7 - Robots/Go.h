#pragma once
#include<iostream>

using namespace std;

class Go
{
private: 
	float taille;
public:
	Go(float t);
	~Go();
	void afficher()const;
	bool operator>=(float t)const;
};

