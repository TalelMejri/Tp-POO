#include <iostream>
#include "notes.h"
using namespace std;

int main()
{
Notes N1(10,12,15,11,17,9.5);
Notes N2(11.5,13,18,10,12.5);

if (N1.calculmoyenne()>N2.calculmoyenne())
{
    cout<<N1.calculmoyenne()<<endl;
}else{
cout<<N2.calculmoyenne()<<endl;
}
return 0;
}
