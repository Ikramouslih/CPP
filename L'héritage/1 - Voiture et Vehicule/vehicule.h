#pragma once
#include <iostream>
using namespace std;

class vehicule
{
    private:
    string marque;
    string model;
    int id;

    public:
    vehicule(string m , string mo , int id);
    vehicule();
    ~vehicule();
};