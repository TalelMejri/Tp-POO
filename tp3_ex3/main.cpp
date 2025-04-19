#include "Etudiant.cpp"
#include <iostream>

using namespace std;

int main()
{

    Etudiant e1("Talel", "bahra", "123", "01/01/2000", 101, 3);
    e1.afficher();

    cout << "Modification d'une note..." << endl;
    e1.modifier(1);
    e1.afficher();

    cout << "Suppression d'une note..." << endl;
    e1.supprimer(10);
    e1.afficher();

    e1.ajouter(12);
    e1.afficher();
    return 0;
}
