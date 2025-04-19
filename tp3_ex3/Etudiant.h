#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <string>
using namespace std;

class Etudiant{
    string nom;
    string adsress;
    string classe;
    string date_naissance;
    int id;
    int nbr;
    float * notes;

    public:
        Etudiant(string,string,string,string,int,int);
        Etudiant(const Etudiant&);
        ~Etudiant();
        void afficher();
        void modifier(int);
        void supprimer(float);
        void ajouter(float);
};

#endif // ETUDIANT_H_INCLUDED
