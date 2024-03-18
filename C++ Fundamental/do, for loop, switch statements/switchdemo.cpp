#include<iostream>
using namespace std;
int main()
{
    int a,b,res=0;
    char s;
    cout<<"\nEnter 2 nums: ";
    cin>>a>>b;
    cout<<"\nEnter a sign: (+,-,/,*) ";
    cin>>s;
    switch(s)
    {
        case '+': res= a+b;
        break;
        case '-': res= a-b;
        break;
        case '/': res= a/b;
        break;
        case '*': res= a*b;
        break;
        default: cout<<"\ninvalid sign";
        break;

    }
}