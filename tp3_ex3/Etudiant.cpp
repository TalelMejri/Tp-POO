#include "Etudiant.h"
#include <iostream>
using namespace std;

  Etudiant::Etudiant(string nom,string add,string classe,string date,int id,int nbr){
       this->nom=nom;
       adsress=add;
       this->classe=classe;
       date_naissance=date;
       this->id=id;
       this->nbr=nbr;
       notes=new float[nbr];
        for(int i=0;i<nbr;i++){
            cin>>notes[i];
        }
  }

    Etudiant::Etudiant(const Etudiant &a){
       nom=a.nom;
       adsress=a.adsress;
       classe=a.classe;
       date_naissance=a.date_naissance;
       id=a.id;
       nbr=a.nbr;
       notes=new float(a.nbr);
        for(int i=0;i<nbr;i++){
            notes[i]=a.notes[i];
        }

    }

        Etudiant::~Etudiant(){
            delete [ ] notes;
        }

        void Etudiant::afficher(){
            cout<<nom<<adsress<<classe<<date_naissance<<id<<nbr;
            for(int i=0;i<nbr;i++){
                cout<<notes[i]<<endl;
            }
        }

        void Etudiant::modifier(int a){

            float n;
            cin>>n;
            notes[a]=n;
        }

        void Etudiant::supprimer(float a){
            int trouve=0;
            for(int i=0;i<nbr;i++){
                         if(a==notes[i]){
                             trouve = 1;
                                for (int j = i; j < nbr - 1; j++) {
                                        notes[j] = notes[j + 1];
                                }
                                nbr--;
                                break;
                        }
            }
             if (!trouve) {
                cout << "Note " << a << " not found.\n";
            }
      }

        void Etudiant::ajouter(float a){
            nbr++;
            float *tab;
            tab=new float(nbr);
            for(int i=0;i<nbr;i++){
                tab[i]=notes[i];
            }
            tab[nbr]=a;
            notes=tab;
        }
