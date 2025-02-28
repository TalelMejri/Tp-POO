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
        cout<<"donner votre nom:";
        cin>>nom;
        cout<<"donner votre prenom:";
        cin>>prenom;
         cout<<"donner votre numero:";
        cin>>num;
         cout<<"donner votre CIN:";
        cin>>CIN;
         cout<<"donner votre solde:";
        cin>>solde;
        }
        void afficher(){

            cout<<"votre affichage:" <<nom <<" /"<<prenom<<"/"<<num<<"/"<<CIN<<"/"<<solde<<endl;
        }
        void recharger(double s){
            cout<<"votre solde apres recharge du montant "<<s<<endl;
            solde+=s;
                        cout<<"est :"<<solde<<endl;

        }
        bool consommer(int s=12,int prix_min=180){
            int tot=(prix_min/60)*s;
            if(tot>solde){
                    return 0;
            }else{
                    solde-=tot;
                    return 1;
            }
        }

 };

#endif // ABONNE_H_INCLUDED
