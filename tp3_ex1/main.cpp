#include <iostream>
#include "vecteur.h"
using namespace std;

int main()
{
  int nbr;
  cout<<"donner taille de tab"<<endl;
  cin>>nbr;
  vecteur v(nbr);
  v.remplir();
  v.affiche();
  cout<<"somme V"<<v.somme()<<endl;
  vecteur a=v;
  cout<<"Afficher A"<<endl;
  a.affiche();
  int x=v.produit_scalaire(a);
  cout<<"Produit Scalaire "<<x;
  vecteur w =v.produit(2);
  w.affiche();
  vecteur prd=v.som_vect(a);
  prd.affiche();
}
