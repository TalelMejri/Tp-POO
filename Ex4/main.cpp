#include <iostream>
#include "Etudiant.h"

using namespace std;

int main()
{
    Etudiant E1;
    Etudiant E2;
    E1.saisir();
    E2.saisir();
    E1.afficher();
    E2.afficher();
    cout<<"Moyenne E1 "<<E1.moyenne()<<endl;
    cout<<"Moyenne E2 "<<E2.moyenne()<<endl;
    if (E1.admis())  cout<<"L'etudiant E1 est admis"<<endl;
    else cout<<"L'etudiant E1 est redoublant"<<endl;
    if (E2.admis())  cout<<"L'etudiant E2 est admis"<<endl;
    else cout<<"L'etudiant E2 est redoublant"<<endl;

    if (E1.exae_quo(E2)==-1)
        cout<<"L'etudiant E2 a une moyenne superieure que E1"<<endl;
    if (E1.exae_quo(E2)==1)
        cout<<"L'etudiant E1 a une moyenne superieure que E2"<<endl;
    if (E1.exae_quo(E2)==0)
        cout<<"Les deux étudiants ont la meme moyenne"<<endl;
    return 0;
}
