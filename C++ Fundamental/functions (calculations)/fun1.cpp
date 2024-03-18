#include<iostream>
using namespace std;
void calsum(int,int);
int main()
{
    int a,b;
    cout<<"\nEnter 2 Nums: ";
    cin>>a>>b;
    calsum(a,b);
    calsum(45,77);
    return(0);
}
void calsum(int x,int y)
{
    int res;
    res = x+y;
    cout<<"\nSum: "<<res;
}