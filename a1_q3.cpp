#include <iostream>
using namespace std;
int main(){
    int t,n,c=0;
    cout<<"enter the number of inputs";
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"enter number";
        cin>>n;
        for(int j=1;j<=n;j++){
        if(n%j==0)
        {
            c+=1;
        }
          else
          continue;
        }
        if(c>2){
        cout<<"not prime";
        }
        else if(c==1){
            cout<<"neither prime nor composite";
        }
        else
        cout<<"prime";
    }
}
