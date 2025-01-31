#ifndef BOUTEILLE_H_INCLUDED
#define BOUTEILLE_H_INCLUDED
#include "Verre.h"
class Bouteille
{
    private:
        int quantite;
        bool EstOuverte;

    public:
        Bouteille(int);
        void ouvrir();
        void fermer();
        void verser_dans(Verre *,int);
};


#endif // BOUTEILLE_H_INCLUDED
