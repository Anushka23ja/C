#include<iostream>
using namespace std;
int main()
{
    int no,i,res;
    cout<<"\nEnter Number: ";
    cin>>no;
    for(i=1;i<=10;i++)
    {
        res=no*i;
    }
    cout<<"\n"<<no<<"x"<<i<<"="<<res;
}