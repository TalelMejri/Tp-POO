#include "notes.h"

Notes::Notes(){
    test1=0;
    test2=0;
    examen=0;
    DS=0;
    orale=0;
    TP=0;
    avecTP=true;

}
Notes::Notes(float x,float y,float z,float r, float e,float t)
{
    test1=x;
    test2=y;
    examen=z;
    DS=r;
    orale=e;
    TP=t;
    avecTP=true;
}


Notes::Notes(float x,float y,float z,float r, float e)
{
    test1=x;
    test2=y;
    examen=z;
    DS=r;
    orale=e;
    avecTP=false;
}

float Notes::calculNCC()
{
    float NCC=( test1+test2+orale+2*DS)/5;
   return NCC;
}

float Notes::calculmoyenne()
{
    if (avecTP)
    {
        return 0.3*calculNCC()+0.2*TP+0.4*examen;

    }
    return 0.4*calculNCC()+0.6*examen;
}



