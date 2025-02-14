#include <string.h>
#include <iostream>
using namespace std;
#ifndef ABONNE_H_INCLUDED
#define ABONNE_H_INCLUDED

 class Abonne{
    string nom;
    string prenom;
    int num;
    int CIN;
    double solde;
    public:
    void saisir(){
        cin>>nom;
        cin>>prenom;
        cin>>num;
        cin>>CIN;
        cin>>solde;
        }
        void afficher(){
            cout<<nom <<" /"<<prenom<<"/"<<num<<"/"<<CIN<<"/"<<solde<<endl;
        }
        void recharger(double s){
            solde+=s;
        }
        bool consommer(int s=12,int minutes=180){
            int tot=(minutes/60)*s;
            if(tot>solde){
                    return 0;
            }else{
                    solde-=tot;
                    return 1;
            }
        }

 };

#endif // ABONNE_H_INCLUDED
