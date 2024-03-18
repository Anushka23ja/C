#include<iostream>
using namespace std;
void calsum(int, int);
void calsub(int, int);
void calmul(int, int);
void caldiv(int, int);

int main()
{
    int a,b;
    cout<<"\nEnter two nos";
    cin>>a>>b;
    calsum(a,b);
    calsub(a,b);
    calmul(a,b);
    caldiv(a,b);

}
void calsum(int x, int y)
{
    int res;
    res= x+y;
    cout<<"\nSum: "<<res;
}
void calsub(int x, int y)
{
    int res;
    res= x-y;
    cout<<"\nSub: "<<res;
}
void calmul(int x, int y)
{
    int res;
    res= x*y;
    cout<<"\nMulti: "<<res;
}
void caldiv(int x, int y)
{
    int res;
    res= x/y;
    cout<<"\nDiv: "<<res;
}