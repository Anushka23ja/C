#include<iostream>
void calsum(int*, int*);
using namespace std;
int main()
{
    int a, b;
    cout<<"\nEnter 2 nums: ";
    cin>>a>>b;
    calsum(&a,&b);
}
void calsum(int *x, int *y)
{
    int res;
    res= *x+*y;
    cout<<"\nsum: "<<res;
}