#include <iostream>
#include "Etudiant.h"
#include "Ecole.h"
using namespace std;
int main()
{
   /* Etudiant E1;
    Etudiant E2;
    E1.saisir();
    E2.saisir();
    E1.afficher();
    E2.afficher();
    cout<<"Moyenne E1 "<<E1.moyenne()<<endl;
    cout<<"Moyenne E2 "<<E2.moyenne()<<endl;
    if (E1.admis())  cout<<" E1  admis"<<endl;
    else cout<<"E1 redoublant"<<endl;
    if (E1.exae_quo(E2)==-1)
        cout<<" E2 a une moyenne superieure a E1"<<endl;
    if (E1.exae_quo(E2)==1)
        cout<<" E1 a une moyenne superieure a E2"<<endl;
    if (E1.exae_quo(E2)==0)
        cout<<"la meme moyenne"<<endl;*/
        Ecole ecole;


    Etudiant e1;
    Etudiant e2;
    e1.saisir();
    e2.saisir();
    ecole.ajouter(e1);
    ecole.ajouter(e2);

    cout << "Liste des etudiants : " << endl;
    ecole.afficher();

    int idRecherche = 2;
    Etudiant* etudiantTrouve = ecole.rechercher(idRecherche);
    if (etudiantTrouve) {
        cout << "etudiant trouve : " << endl;
        etudiantTrouve->afficher();
    } else {
        cout << "Aucun etudiant trouve avec l'ID " << idRecherche << endl;
    }

    int idSupprimer = 1;
    ecole.supprimer(idSupprimer);
    cout << "Apres suppression de leudiant avec ID " << idSupprimer << " :" << endl;
    ecole.afficher();
    return 0;
}
