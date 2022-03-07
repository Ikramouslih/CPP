#pragma once 
#include <iostream>
#include <vector>
#include "compte.h"
#include "client.h"


using namespace std;

class appbanque
{
    private:
       vector<client*> listclient; 
       vector<compte*> listcompte; 
    public:
        appbanque();
        ~appbanque();
        void ajouter_client(client *cl);
        void ajouter_compte(compte *co);
       

};