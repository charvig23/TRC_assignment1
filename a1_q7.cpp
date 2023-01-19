#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,digit,inv=0,place=1;
    cout<<"enter number";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        inv=inv+(pow(10,digit-1)*place++);
        n=n/10;
    }
    cout<<inv;
}
