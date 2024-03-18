#include<iostream>
using namespace std;
#include"lib2.h"
int main()
{
    int a,b;
    cout<<"\nEnter 2 nos: ";
    cin>>a>>b;
    calsum(a,b);
    calsub(a,b);
    calmul(a,b);
    caldiv(a,b);
}