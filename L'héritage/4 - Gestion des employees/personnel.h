#pragma once
#include "Employe.h"
#include <vector>

class personnel 
{
	private:
		vector<employe*> vect_personnel;

	public:
		personnel();
        void add_employe(employe*e);
		float somme_sal();
		~personnel();
	
};