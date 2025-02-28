#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <string>

using namespace std;
class Etudiant{

         string nom;
         string prenom;
         float notes[10];

    public:

    Etudiant(){
            nom="";
            prenom="";
            for(int i=0;i<10;i++){
                 notes[i]=0;
            }
        }

        Etudiant(string nom, string prenom, float notes[10])
        {
            this->nom = nom;
            this->prenom = prenom;
            for (int i=0;i<10;i++){
                this->notes[i] = notes[i];
            }
        }

        void saisir();
        void afficher();
        float moyenne();
        bool admis();
        int exae_quo(Etudiant);

};

#endif // ETUDIANT_H_INCLUDED
