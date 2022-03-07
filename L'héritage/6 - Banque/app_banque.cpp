#include <iostream>
#include "app_banque.h"

using namespace std;

appbanque::appbanque()
{
    this->listclient = vector<client*>();
    this->listcompte = vector<compte*>();
}

appbanque::~appbanque()
{
    for (int i = 0; i < this->listclient.size(); i++)
	{
		delete this->listclient[i];
		this->listclient[i] = 0;
	}
	this->listclient.clear();

    for (int i = 0; i < this->listcompte.size(); i++)
	{
		delete this->listcompte[i];
		this->listcompte[i] = 0;
	}
	this->listcompte.clear();
}

void appbanque::ajouter_client(client *cl)
{
    this->listclient.push_back(cl);
}

void appbanque::ajouter_compte(compte *co)
{
    this->listcompte.push_back(co);
}

