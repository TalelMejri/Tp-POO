#include "vecteur.h"
#include <iostream>
using namespace std;
vecteur::vecteur(int nb){
     this->nb=nb;
     tab=new int[nb];
}

vecteur::vecteur(const vecteur& v){
   nb=v.nb;
   tab=new int[nb];
   for(int   i=0;i<nb;i++){
        tab[i]=v.tab[i];
   }
}

vecteur::~vecteur(){
    delete [] tab;
}

 void vecteur::  affiche(){
    cout<<"Affiche Tab"<<endl;
    for(int i=0;i<nb;i++){
        cout<<tab[i]<<" | ";
    }
    cout<<endl;
}

void vecteur:: remplir(){
    for(int i=0;i<nb;i++){
        cout<<"donner element num "<<i+1<<endl;
        cin>>tab[i];
    }
}

int vecteur::somme(){
    int somme=0;
     for(int i=0;i<nb;i++){
        somme+=tab[i];
    }
    return somme;
}

int vecteur::produit_scalaire(vecteur a){
    int produit_sc=0;
    for(int i=0;i<nb;i++){
        produit_sc+=tab[i]*a.tab[i];
    }
    return produit_sc;
}

vecteur vecteur::produit(int a){
     vecteur v;
    for(int i=0;i<nb;i++){
        v.tab[i]=tab[i]*a;
    }
    return v;
}

vecteur vecteur::som_vect(vecteur a){
     vecteur somme;
    for(int i=0;i<nb;i++){
        somme.tab[i]=tab[i]+a.tab[i];
    }
    return somme;
}









