#include<iostream>
using namespace std;
int main()
{
    int a,i=2,j;
    cout<<"enter a number";
    cin>>a;
    while(i<=a){
        if(a%i==0){
            cout<<i;
            a=a/i;
        }
        else
        i++;
    }
}
