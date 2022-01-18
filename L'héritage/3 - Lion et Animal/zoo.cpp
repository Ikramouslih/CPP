#include <iostream>
#include "lion.h"
#include "liger.h"
using namespace std;

int main()
{   
    //dynamique + virtual
    
    animal **zoo = new animal*[4];//double pointeur pour assurer la creation dynamique des cases


    zoo[0] = new animal ("animal1");
    zoo[1] = new lion ("lion1","brown");
    zoo[2] = new liger ("liger1","black",142);
    zoo[3] = new animal ("animal2");

    for(int i = 0 ; i < 4 ; i++)
    {
        zoo[i]->manger();
    }  

} 