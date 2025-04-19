#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED
#include <iostream>
using namespace std;

class Article{
    protected:
    string nom;
    float prix;
public:
    Article(string nom=" ",float prix=0.0);
    virtual float getPrix(){return prix;};
    string getNom(){
     return nom;
    }
    virtual void saisir();
    void setPrix(float p){prix=p;};
    virtual void afficher();
    virtual ~Article(void);
    Article operator+(Article&);
    friend class ArticleEnSolde;
    friend ostream& operator<<(ostream&,Article&);
    friend istream& operator>>(istream&,Article&);
};

#endif // ARTICLE_H_INCLUDED
