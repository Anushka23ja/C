#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter two nums: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter swap a= "<<a<<"\tb= "<<b;
}
