#include "Bouteille.h"

Bouteille::Bouteille(int quantite){
    this->quantite = quantite;
}

void Bouteille::ouvrir(){
    EstOuverte = true;
}

void Bouteille::fermer(){
    EstOuverte = false;
}

void Bouteille::verser_dans(Verre *v,int quantite){
    int nouvelleQuantite,ancienneQuantite;
    ancienneQuantite = v->getQuantite();
    nouvelleQuantite = ancienneQuantite + quantite;
    v->setQuantite(nouvelleQuantite);
    this->quantite-=quantite;
}
