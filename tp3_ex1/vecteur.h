#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED

class vecteur {
    int*tab;
    int nb;
    public:
        vecteur(int=10);
        vecteur(const vecteur&);
        ~vecteur();
        void affiche();
        void remplir();
        int somme();
        int produit_scalaire(vecteur);
         vecteur produit(int);
        vecteur som_vect(vecteur);
};


#endif // VECTEUR_H_INCLUDED
