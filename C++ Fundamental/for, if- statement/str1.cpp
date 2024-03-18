#include<iostream>
using namespace std;
int main()
{
    int i, tot=0;
    for(i=1;i<=50;i++)
    {
        if(i%5==0)
        {
            cout<<"\n"<<i;
            tot=tot+i;
        }
    }
    cout<<"\nTotal: "<<tot;
}