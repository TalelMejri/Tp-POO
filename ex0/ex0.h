#ifndef EX0_H_INCLUDED
#define EX0_H_INCLUDED

struct date
{
    int jour ;
    int mois;
    int annee;

};
typedef struct date DATE;

typedef struct etudiant{
    int CIN;
    char nom[30];
    DATE date_naiss;
    float notes[3];
    float moyenne;
}ETUDIANT;


#endif // EX0_H_INCLUDED
