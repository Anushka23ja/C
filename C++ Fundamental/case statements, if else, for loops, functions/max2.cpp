#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three nums: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"Max num: "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"Max num: "<<b;
    }
    else{
        cout<<"Max num: "<<c;
    }
}
