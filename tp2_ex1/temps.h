#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED

class Temps{
    int heure;
    int minutes;
    int secondes;
    public:
    Temps(int,int,int);
    void affiche_anglaise();
    void affiche_francaise();
    int inferieur(Temps& );
};

#endif // TEMPS_H_INCLUDED
