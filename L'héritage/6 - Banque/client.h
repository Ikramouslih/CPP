#pragma once
#include <iostream>
using namespace std;

class client
{
	private:
		static int cpt;
		int Numcl;
		string nom;
		string prenom;
		string adresse;
	public: 
		client(string n, string p, string adr);
		~client();
		void afficher()const;
};

