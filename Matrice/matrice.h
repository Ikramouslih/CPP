#pragma once
class Matrice {
public:
	Matrice(int l, int c);

	void remplissage();
	void afficher() const;
	Matrice& operator+(const Matrice& M) const;
	Matrice& operator*(const Matrice& M) const;
	~Matrice();
private:
	int** mat;
	int l, c;
};