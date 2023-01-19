#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int n,k,i,divi=1,mult=1,c=0,p,q,s,temp;
    cout<<"enter n";
    cin>>n;
    temp=n;
    cout<<"enter k";
    cin>>k;
    while(temp!=0){
        temp=temp/10;
        c+=1;
    }
    
    for(i=1;i<=c;i++){
        if(i<=k){
            divi=divi*10;
        }
        else
        mult=mult*10;
    }
    p=n%divi;
    q=n/divi;
    s=q+p*mult;
    cout<<s;
}
