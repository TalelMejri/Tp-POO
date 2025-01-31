#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

#include <string>
using namespace std;

class Compte
{
    private:
       int numCompte;
       string nomProprietaire;
       float solde;
    public:
        Compte(){
            numCompte=0;
            nomProprietaire="";
            solde=0.0;
        };
        Compte(int,string,float);
        bool retirerArgent(float montant);
        void deposerArgent(float montant);
        void consulterSolde();
};

#endif // COMPTE_H_INCLUDED
