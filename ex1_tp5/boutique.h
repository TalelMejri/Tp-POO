#ifndef BOUTIQUE_H_INCLUDED
#define BOUTIQUE_H_INCLUDED
#include"Article.cpp"
#include "ArticleEnSolde.h"
#include<vector>
class boutique{
  string nom;
  string matricule;
  vector<Article*> articles;
    public:
  boutique(string ="test",string="test1");
  ~boutique();
  boutique(const boutique&);
  void afficher();
  void afficher_enSOlde();
  friend ostream& operator<<(ostream& ,boutique& );

};

#endif // BOUTIQUE_H_INCLUDED
