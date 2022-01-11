#pragma once
typedef int T;

   
class element
{
   private:
       T data;
       element* next;

   public:
       element(T data);
       void affichage() const;
       friend class pile;//permet d'acceder aux attributs d'une autre classe
       //non valable dans des scenarios ex: compte bancaire
       //friend void pile::empiler(element* e);
       ~element();

        //element* get_next() const;//getters en lecture (elle casse l'encapsulation)
       //void set_next(element*NV);//setters en ecriture 
       //void set_data(T NV) ;
       //T get_data() const;
};

