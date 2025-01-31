#ifndef NOTES_H_INCLUDED
#define NOTES_H_INCLUDED

class Notes
{
    private:
        float test1;
        float test2;
        float DS;
        float Examen;
        float orale;
        float TP;
        bool avecTP;

    public:
        Notes(){
            test1=0.0;
            test2=0.0;
            DS=0.0;
            Examen=0.0;
            orale=0.0;
            TP=0.0;
            avecTP=true;
        }

        Notes(float, float,float, float, float,float);
        Notes(float, float, float, float, float);
        float calculMoyenne();
    private:
        float calculNCC();
};


#endif // NOTES_H_INCLUDED
