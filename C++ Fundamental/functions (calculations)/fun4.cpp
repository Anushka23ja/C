#include<iostream>
using namespace std;
int calsum(int,int);
int main()
{
    int a,b,c;
    cout<<"\nEnter two nos";
    cin>>a>>b;
    c=calsum(a,b);
    cout<<"\nsum: "<<c;
}

int calsum(int x,int y)
{
    int res;
    res=x+y;
    return(res);
}