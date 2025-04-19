#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED

#include "Etudiant.h"
#include <vector>
#include <iostream>

using namespace std;

class Ecole{
    vector<Etudiant> tab;
public:
 void ajouter(Etudiant e) {
        for (size_t i = 0; i < tab.size(); i++) {
            if (tab[i].getId() == e.getId()) {
                cout << "L'étudiant avec l'ID " << e.getId() << " existe déjà." << endl;
                return;
            }
        }
        tab.push_back(e);
    }

    void afficher() {
        for(size_t i = 0; i < tab.size(); i++) {
            tab[i].afficher();
        }
    }

    Etudiant* rechercher(int id) {
        for(size_t i = 0; i < tab.size(); i++) {
            if(tab[i].getId() == id) {
                return &tab[i];
            }
        }
        return nullptr;
    }

    void supprimer(int id) {
        for(size_t i = 0; i < tab.size(); i++) {
            if(tab[i].getId() == id) {
                tab.erase(tab.begin() + i);
                return;
            }
        }
    }
};

#endif
