#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=1;i<6;i++)
    {
        if((i==1)||(i==5))
        {
            for (j=1;j<6;j++)
            {
                cout<<"* ";
            }
        }
        else
        for(j=1;j<6;j++)
        {
            if((i+j)==6){
                cout<<"*";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
       
    }
    
    return 0;
}
