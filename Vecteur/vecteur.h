#pragma once

namespace Geo{
    class vecteur3d 
    {
        private:
            float *vect;//pointeur sur un tab dynamique de 3 cases à definir dans cpp
        public:
            vecteur3d(float x=0.0, float y=0.0, float z=0.0);//fusion entre constructeur sans et avec parametre les valeur sont des valeurs par defaut
            vecteur3d(const vecteur3d &v);//constructeur de recopie
            ~vecteur3d();

            bool operator==(const vecteur3d &v) const;
            bool operator!=(const vecteur3d &v) const;
            vecteur3d& operator=(const vecteur3d &v);
            //fonction return avec reference car on a juste 2 objets et on n va pas créer un autre 
            //l'affectation est toujours avec 2 objets seulement a=b
            //on doit jamais faire return & l adresse d'une variable local dans une méthode
            //donc on fait le return d'un objet qui va être considerer comme global
            float& operator[](int index);//const ou pas const est juste 

            void afficher() const;
            vecteur3d somme(vecteur3d &v) const;
            vecteur3d prodscal(int a) const;
            

    };
}
