//function overloading (polymorphism)
#include<iostream>
using namespace std;
void calsum(int,int); //function prototype
void calsum(int,int,int);
int main()
{
    int a,b,c;
    cout<<"\nEnter 3 nums: ";
    cin>>a>>b>>c;
    calsum(a,b);
    calsum(a,b,c);
}
void calsum(int x,int y)
{
    int res;
    res=x+y;
    cout<<"\nSum: "<<res;
}
void calsum(int x,int y,int z)
{
    int res;
    res=x+y+z;
    cout<<"\nsum: "<<res;
}