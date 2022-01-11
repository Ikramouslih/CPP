#pragma once
class Heure
{
    public:
        Heure(int h = 0, int min = 0 , int sec = 0);
        void print()const;
        bool operator>(const Heure& H) const;
        int converttosec()const;
        ~Heure(); 
    protected:// pour qu'ils soient accessible par les classes filles mais private pour les autres classes
        int heure;
        int min;
        int sec;
};