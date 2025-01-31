#include "compte.h"
#include <iostream>
using namespace std;

Compte::Compte(int numCompte, string nomProprietaire, float solde){
    this->numCompte = numCompte;
    this->nomProprietaire = nomProprietaire;
    this->solde = solde;
}

bool Compte::retirerArgent(float montant){
    if (solde>montant){
        solde-=montant;
        return true;
    }
    else {
        cout<<"Le solde est insuffisant "<<endl;
        return false;
    }
}

void Compte::deposerArgent(float montant){
    solde+=montant;
}

void Compte::consulterSolde(){
    cout<<"Le solde du compte courant =  "<<solde<<endl;
}
