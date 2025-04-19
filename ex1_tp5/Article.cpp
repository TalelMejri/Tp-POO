#include "Article.h"

Article::Article(string n,float p){
    nom=n;
    prix=p;
}

void Article::saisir(){
    cout<<"Donner nom"<<endl;
    cin>>nom;
    cout<<"Donner prix"<<endl;
    cin>>prix;
}

void Article::afficher(){
    cout<<nom;
    cout<<prix;
}

Article::~Article(void){
}

Article Article::operator+(Article &a){
    Article c;
    c.nom=nom+a.nom;
    c.prix=a.prix>prix ? prix  : a.prix;
    return c;
}

 ostream& operator<<(ostream& x,Article& a)
{
    x<<a.nom<<endl;
    x<<a.prix<<endl;
    return x;
}

 istream& operator>>(istream& x,Article& a)
 {
     x>>a.nom;
     x>>a.prix;
     return x;
 }

