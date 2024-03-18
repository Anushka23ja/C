#include<iostream>
using namespace std;
int main()
{
    int i, no,res=1;
    cout<<"\nEnter Number: ";
    cin>>no;
    for(i=no;i>=1;i--)
    {
        res=res*i;
    }
    cout<<"\nFactor is l="<<res;
}

//3*2*1=6
//4*3*2*1=24