#include "boutique.h"
#include <typeinfo>

boutique::boutique(string n,string m){
    nom=n;
    matricule=m;
    char rep;
    int choix;
    Article* a;
    do{
        cout<<"taper 1,2"<<endl;
        cin>>choix;
        if(choix==1){
                a=new Article;
        }else if(choix==2){
                a=new ArticleEnSolde ;
        }else{
            break;
        }
        a->saisir();
        articles.push_back(a);
        cout<<"Rajouter"<<endl;
        cin>>rep;
    }while(rep=='o');
}


boutique::boutique(const boutique& b ){
    nom=b.nom;
    matricule=b.matricule;
    Article*e;
    for(size_t i=0;i<b.articles.size();i++){
        if(typeid(*b.articles[i])==typeid(Article)){
         e=new Article(static_cast<const Article&>(*b.articles[i]));
        }else if(typeid(*b.articles[i])==typeid(ArticleEnSolde)){
        e=new ArticleEnSolde(static_cast<const ArticleEnSolde&>(*b.articles[i]));
        }
        articles.push_back(e);
    }
}

void boutique::afficher(){
    cout<<nom;
    cout<<matricule;
    for(size_t i=0;i<articles.size();i++){
      articles[i]->afficher();
      cout<<endl;
    }
}

void boutique::afficher_enSOlde(){
    cout<<nom;
    cout<<matricule;
    for(size_t i=0;i<articles.size();i++){
      if (typeid(*articles[i])==typeid(ArticleEnSolde)){
          articles[i]->afficher();
          cout<<endl;
      }
    }
}

 boutique:: ~boutique(){
     for(size_t i=0;i<articles.size();i++){
        delete articles[i];
     }
     articles.clear();
 }

 ostream& operator<<(ostream& out ,boutique& B ){
    out<<B.nom;
    out<<B.matricule;
    for(size_t i=0;i<B.articles.size();i++){
          B.articles[i]->afficher();
                cout<<endl;

      }

    return out;
}






