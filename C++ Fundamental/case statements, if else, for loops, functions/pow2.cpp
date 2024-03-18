#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int base,pow1,res=0;
    cout<<"\nEnter a base and power number: ";
    cin>>base>>pow1;
    res=pow(base,pow1);
    cout<<"\nResult: "<<res;
}