#include <iostream>

using namespace std;

int fct(int x){
  cout<<"fct 1"<<endl;
  return x;
}

int fct(float x){
    cout<<"fct 2"<<endl;
    return 0;
}

void fct(int x, float y)
{
    cout<<"fct 3"<<endl;
}

void fct(float x, int y){
    cout<<"fct 4"<<endl;
}

int main()
{
 int n,p;
 float x,y;
 char c;
 double z ;
 fct(n);
 fct(x);
 fct(n,x);
 fct(x,n);
 fct(c);
/* fct(n,p);
 fct(n,c);*/
 fct(n,z);
 /*fct(z,z);*/
}
