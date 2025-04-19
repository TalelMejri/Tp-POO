#ifndef ARTICLEENSOLDE_H_INCLUDED
#define ARTICLEENSOLDE_H_INCLUDED

#include "Article.h"

class   ArticleEnSolde:public Article{
    int remise;
public:
    void setRemise(int r){remise=r;};
    float getPrix(){
        float p=Article::getPrix()*remise/100;
        return prix-p;
    }
    void saisir(){
        Article::saisir();
        cout<<"Remise"<<endl;
        cin>>remise;
    }
    void afficher(){
        Article::afficher();
        cout<<remise;
    }
    ~ArticleEnSolde(void){
    }
    ArticleEnSolde(): Article(), remise(0) {}

    ArticleEnSolde(string n,float p,int r):Article(n,p){
        remise=r;
    }
    ArticleEnSolde operator<(ArticleEnSolde& a){
    return (a.getPrix() < this->getPrix()) ? a : *this;
    }
    friend ostream& operator<<(ostream&x,ArticleEnSolde&a){
        x<<a.prix<<endl;
        x<<a.nom<<endl;
        x<<a.remise<<endl;
        return x;
    }
    friend istream& operator>>(istream& in,ArticleEnSolde& a){
        cout<<"saisir"<<endl;
        Article*q =&a;
        in>>*q;
        in>>a.remise;
        return in;
    }

};

#endif // ARTICLEENSOLDE_H_INCLUDED
