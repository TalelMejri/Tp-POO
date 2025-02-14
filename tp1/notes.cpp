#include "Notes.h"

Notes::Notes(float test1, float test2, float DS, float Examen, float orale, float TP){
    this->test1 = test1;
    this->test2 = test2;
    this->DS = DS;
    this->Examen = Examen;
    this->orale = orale;
    this->avecTP = true;
    this->TP = TP;
}

Notes::Notes(float test1, float test2, float DS, float Examen, float orale){
    this->test1 = test1;
    this->test2 = test2;
    this->DS = DS;
    this->Examen = Examen;
    this->orale = orale;
    this->avecTP = false;
}

float Notes::calculNCC(){
    return (test1+test2+orale+2*DS)/5;
}

float Notes::calculMoyenne(){
    float moyenne;
    if (avecTP){
        moyenne=calculNCC()*0.3+TP*0.2+Examen*0.4;
    }
    else {
        moyenne=calculNCC()*0.4+Examen*0.6;
    }
    return moyenne;
}
