#include <iostream>
#include "Notes.h"

using namespace std;

int main()
{
    Notes * N1;
    N1 =  new Notes(10, 12, 15, 11, 17, 9.5);
    Notes * N2;
    N2 =  new Notes(11.5, 13, 18, 10, 12.5);
    if (N1->calculMoyenne() < N2->calculMoyenne())
        cout <<" La moyenne max = "<<N2->calculMoyenne()<<endl;
    else
        cout <<" La moyenne max =  "<<N2->calculMoyenne();
    cout<<" La moyenne de N1 =  "<<N1->calculMoyenne()<<endl;
    cout<<" La moyenne de N2 =  "<<N2->calculMoyenne()<<endl;
    return 0;
}
