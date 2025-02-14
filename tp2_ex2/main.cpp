#include <iostream>
#include "abonne.h"
using namespace std;

int main()
{
    Abonne abonne;
    abonne.saisir();
    abonne.afficher();
    abonne.recharger(200);
    abonne.consommer();
    abonne.afficher();
}
