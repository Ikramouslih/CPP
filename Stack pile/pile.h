#pragma once
#include "element.h"

class pile
{
   private:
      element *sommet;
   public:
       pile();
       void empiler(element e);
       void depiler();
       bool est_vide()const;
       void print();
       element* top()const;
       ~pile();

};

