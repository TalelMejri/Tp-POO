#include <iostream>
#include "Verre.h"
#include "Bouteille.h"

using namespace std;

int main()
{
    Bouteille *B1;
    Bouteille *B2;
    B1 = new Bouteille(1000);
    B2 = new Bouteille(1000);

    Verre *V;
    V = new Verre(20);

    cout<<"Test Avant : "<<V->getQuantite()<<endl;

    B1->verser_dans(V,15);

    B2->verser_dans(V,5);

    V->boire(V->getQuantite());

    cout<<V->getQuantite();
    return 0;
}
