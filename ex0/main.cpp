#include <iostream>
#include "ex0.h"
using namespace std;

void saisir_etudiant(ETUDIANT & etd){
    cout<<"cin"<<endl;
    cin>>etd.CIN;

     cout<<"nom"<<endl;
    cin>>etd.nom;

    cout<<"Date :"<<endl;
    cout<<"jour , mois , anne"<<endl;
    cin>>etd.date_naiss.jour>>etd.date_naiss.mois>>etd.date_naiss.annee;

    cout<<"Notes "<<endl;
    float somme=0;

    for(int i=0;i<3;i++){
        cin>>etd.notes[i];
        somme+=etd.notes[i];
    }

    etd.moyenne=somme/3;
}

void afficher_etudiant(ETUDIANT&etd){

cout <<"cin :"<<etd.CIN<<endl;
cout <<"nom :"<<etd.nom<<endl;
cout<<"date : "<<etd.date_naiss.jour<<"/"<<etd.date_naiss.mois<<"/"<<etd.date_naiss.annee<<endl;
for(int i=0;i<3;i++)
    cout<<"notes : "<<i+1<<" )"<<etd.notes[i]<<endl;
cout<<"moyenne :"<<etd.moyenne<<endl;
}

int main()
{
   int n;
   cout<<"nbr etudiant :"<<endl;
    cin>>n;
    ETUDIANT* tab=new ETUDIANT[n];
    for(int i=0;i<n;i++){
            cout<<"saisir etudiant nbr :"<<i+1<<endl;
            saisir_etudiant(tab[i]);
            cout<<"---------------------------------"<<endl;
    }

    for(int i=0;i<n;i++){
            cout<<"affiche etudiant nbr :"<<i+1<<endl;
            afficher_etudiant(tab[i]);
            cout<<"---------------------------------"<<endl;
    }
    delete tab [];
    return 0;
}
