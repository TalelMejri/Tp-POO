#include "temps.h"
#include <iostream>
using namespace std;

Temps::Temps(int h,int m,int s){
    heure=h;
    minutes=m;
    secondes=s;
}

void Temps::affiche_anglaise(){
    if(heure>12){
            cout<<heure-12<<":"<<minutes<<":"<<secondes<<"pm"<<endl;
    }else{
        cout<<heure<<":"<<minutes<<":"<<secondes<<"am"<<endl;
    }
}

void Temps::affiche_francaise(){

    cout<<heure<<":"<<minutes<<":"<<secondes<<endl;
}

int Temps::inferieur(Temps &t){
    if(heure<t.heure){
            return 1;
    }
    else if (heure>t.heure)
    {
            return 0;
    }else{
        if(minutes<t.minutes){
            return 1;
        }else if(minutes>t.minutes){
            return 0;
        }else{
                 if(secondes<t.secondes){
            return 1;
        }else if(secondes>t.secondes){
            return 0;
        }else{
            return -1;
        }
    }
}
}
