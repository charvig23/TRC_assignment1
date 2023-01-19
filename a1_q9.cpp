#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,gcd=1,lcm=1,max=0;
    cout<<"enter two numbers";
    cin>>a>>b;
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            max=i;
        }
    }
    cout<<"gcd is - "<<max<<"\n";
    cout<<"lcm is - "<<((a*b)/max);
}
