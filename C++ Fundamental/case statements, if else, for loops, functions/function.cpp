#include<iostream>
using namespace std;
int calsum(int,int); //function prototype
//function with arguments with return 
int main()
{
    int a,b,c;
    cout<<"\nEnter two Nums: ";
    cin>>a>>b;
    c = calsum(a,b);
    cout<<"Sum: "<<c;
}
int calsum(int a, int b)
{
    int res;
    res = a+b;
    return res;
}
