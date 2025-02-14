#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED
#include <string>
class Banque{
    int numCompte;
    string nomPropertier;
    float solde;
    public:
    Banque();
    Banque(int;string,float);
    retirerArgent(float);
    deposerArgent(float);
    consulterSole();
};


#endif // BANQUE_H_INCLUDED
