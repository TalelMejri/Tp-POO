#pragma once
#ifndef NOTES_H_INCLUDED
#define NOTES_H_INCLUDED

class Notes{
    float test1;
    float test2;
    float examen;
    float orale;
    float TP;
    bool avecTP;
public:
    Notes();
    Notes(float,float,float,float,float,float);
    Notes(float,float,float,float,float);
    float calculmoyenne();
    private:
    float calculNCC();




};

#endif // NOTES_H_INCLUDED
