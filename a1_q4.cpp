#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,c=0;
    cout<<"enter lower value and higher value";
    cin>>a>>b;
    for(i=a;i<=b;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                c=c+1;
            }
        }
        if(c==2){
            cout<<i;
        }
    }
}
