#include <iostream>
#include "abonne.h"
using namespace std;

int main()
{
    Abonne abonne;
    abonne.saisir();
    abonne.afficher();
    abonne.recharger(200);
    int a,b;
    cout<<"donner nombres de secondes"<<endl;
    cin>>a;
    cout<<"donner le prix d une minute"<<endl;
    cin>>b;

    abonne.consommer(a,b);
    abonne.afficher();
}
