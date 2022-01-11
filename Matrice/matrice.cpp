#include <iostream>
#include "matrice.h"
#include <assert.h>

using namespace std;

Matrice::Matrice(int l, int c)
{
    this->l = l;
    this->c = c;

    this->mat = new int* [this->l]; 

    for (int i = 0; i < this->l ; i++)
    {
        this->mat[i] = new int[this->c];
    }
}

void Matrice::remplissage()
{
    for (int i = 0; i < this->l ; i++)
    {
        for (int j = 0; j < this->c; j++)
        {
            cin >> this->mat[i][j];
        }
    }
    
}

void Matrice::afficher() const
{
    for (int i = 0; i < this->l; i++)
    {
        for (int j = 0; j < this->c; j++)
        {
            cout << this->mat[i][j] << " ";
        }
        cout << endl;
    }
}

Matrice& Matrice::operator+(const Matrice& M) const
{
    Matrice *SM = new Matrice(this->l, this->c);

    for (int i = 0; i < this->l; i++)
    {
        for (int j = 0; j < this->c; j++)
        {
            SM->mat[i][j] = this->mat[i][j] + M.mat[i][j];
        }
    }

    return *SM;
}

Matrice& Matrice::operator*(const Matrice& M) const
{
    assert(this->l == M.c);

    Matrice* SM = new Matrice(this->l, M.c);

    for (int i = 0; i < this->l; i++)
    {
        for (int j = 0; j < this->c; j++)
        {
            int r = 0;
            for (int k = 0; k < this->c ; k++)
            {
                r += this->mat[i][k] * M.mat[k][j];
            }
            SM->mat[i][j] = r;
        }
    }

    return *SM;
}

Matrice::~Matrice()
{
    for (int i = 0; i < this->l ;  i++)
    {
        delete[] this->mat[i];
        this->mat[i] = 0;
    }
    delete[] this->mat;
    this->mat = 0;

}
