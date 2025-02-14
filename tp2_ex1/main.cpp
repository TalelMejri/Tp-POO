#include <iostream>
#include"temps.h"
using namespace std;

int main()
{
 int h,m,s;
 cin>>h>>m>>s;
 Temps t(h,m,s);

 cout<<"tu prefres anglaise ou francaise (A,F)"<<endl;
 char type;
 cin>>type;
 if(type=='A'){
        t.affiche_anglaise();
 }else{
      t.affiche_francaise();
 }


  Temps t2(13,25,30);
  cout<<"Resultat Comparaison "<<endl;
  if(t.inferieur(t2)==0){
    t.affiche_francaise();
  }else if(t.inferieur(t2)==1){
    t2.affiche_francaise();
  }else{
   cout<<" temps egaux"<<endl;
  }


}
