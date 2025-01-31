#include "Verre.h"

Verre::Verre(int contenance){
    this->contenance = contenance;
}

void Verre::remplir(int quantite){
    this->quantite+=quantite;
}

void Verre::boire(int quantite){
    this->quantite-=quantite;
}
