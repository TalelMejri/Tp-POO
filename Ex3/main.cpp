#include <iostream>
#include "Verre.h"
#include "Bouteille.h"

using namespace std;

int main()
{
    Bouteille B1(1000);
    Bouteille B2(1000);

    Verre V(20);


    cout<<"Test Avant : "<<V.getQuantite()<<endl;

    B1.verser_dans(V,15);

    B2.verser_dans(V,5);

        cout<<"Test Apres : "<<V.getQuantite()<<endl;


    V.boire(V.getQuantite());

    cout<<V.getQuantite();
    return 0;
}
