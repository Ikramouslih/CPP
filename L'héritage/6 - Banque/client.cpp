#include "client.h"
using namespace std;

int client::cpt = 0;
client::client(string n, string p, string adr)
	:Numcl(++client::cpt)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = adr;
}

client::~client()
{
	cout << "dest de la classe client" << endl;
	client::cpt--;
}

void client::afficher() const
{	
	cout << "Numero de client : " << this->Numcl << endl;
	cout << "Nom : " << this->nom << endl;
	cout << "Prenom : " << this->prenom << endl;
	cout << "Adresse : " << this->adresse << endl;
}
