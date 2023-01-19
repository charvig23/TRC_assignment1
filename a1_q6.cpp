#include <iostream>
using namespace std;
int main()
{
    int i,s;
    cout<<"enter a number";
    cin>>i;
    while(i!=0)
    {
        cout<<i%10;
        i=i/10;
    }
}
