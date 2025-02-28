#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED
class complexe{
    float real;
    float imag;
public:
    complexe(float a,float c){
      real=a;
      imag=c;
    }
     float get_reel(){
         return  real;
        }
    float get_imaginaire(){
        return imag;
    }
    void additionnerR(float real)
    {
        this->real+=real;
        }
    void multiplierR(float R){
        real=real*R;
        imag=imag*R;
        }
    void multiplierI(){
        float a;
        a=imag;
        imag=real;
        real=-a;
        }
    complexe additionneC(complexe C1)
    {
        complexe C2;
        C2.real=C1.real+real;
        C2.imag=C1.imag+imag;
        return C2;
    }
    void afficherC()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }



};


#endif // COMPLEXE_H_INCLUDED
