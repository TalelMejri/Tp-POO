#include <iostream>
#include <string>
#include "compte.h"
using namespace std;

int main()
{
    Compte * C1;
    C1 = new Compte(6001, "BEN SALEH MOHAMED", 850.175);
    C1->deposerArgent(100);
    cout<<"Apres depot du montant "<<endl;
    C1->consulterSolde();
    float test;
    cout<<"donner montant pour retirer "<<endl;
    cin>>test;
    C1->retirerArgent(test);
    cout<<"Apres retrait du montant "<<endl;
    C1->consulterSolde();
    return 0;
}
