#include <iostream>
using namespace std;

int main()
{
    int i,c=0;
    cout<<"enter the number";
    cin>>i;
    while(i!=0)
    {
        c+=1;
        i=i/10;
    }
    cout<<c;
    
}
