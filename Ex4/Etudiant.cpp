#include "Etudiant.h"
#include "iostream"
using namespace std;

void Etudiant::saisir(){
    cout<<"Saisir le nom de l'etudiant ";
    cin>>nom;
    cout<<"Saisir le prenom de l'etudiant ";
    cin>>prenom;
    cout<<"Saisir ses notes "<<endl;
    for(int i=0;i<10;i++){
        cin>>tab_notes[i];
    }
}

void Etudiant::afficher(){
    cout<<"Nom "<<nom<<endl;
    cout<<"Prenom "<<prenom<<endl;
    cout<<"Les notes "<<endl;
    for (int i=0;i<10;i++){
        cout<<tab_notes[i]<<" ";
    }
    cout<<endl;
}

float Etudiant::moyenne(){
    float som=0;
    for (int i=0;i<10;i++){
        som+=tab_notes[i];
    }
    return som/10;
}

bool Etudiant::admis(){
    if (moyenne()>=10)
        return true;
    return false;
}

int Etudiant::exae_quo(Etudiant e){
    if (moyenne()< e.moyenne())
        return -1;
    else
        if (moyenne()> e.moyenne())
            return 1;
    return 0;
}
