#include<iostream>
using namespace std;
int main()
{
    int mks;
    cout<<"enter your marks";
    cin>>mks;
    if(mks>90){
        cout<<"excellent";
    }
    else if((mks>80)&&(mks<=90)){
        cout<<"good";
    }
    else if((mks>70)&&(mks<=80)){
        cout<<"fair";
    }
    else if((mks>60)&&(mks<=70)){
        cout<<"meets expectations";
    }
    else
    cout<<"below par";
    
    return 0;
}
