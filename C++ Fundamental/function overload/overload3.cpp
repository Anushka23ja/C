#include<iostream>
using namespace std;
void calperi(float);
void calperi(float, float);
int main()
{
    float s,l,b;
    cout<<"\nEnter l b s";
    cin>>l>>b>>s;
    calperi(l,b);
    calperi(s);
}
void calperi(float x)
{
    float res;
    res = x*4;
    cout<<"\nPerimeter of square: "<<res;
}
void calperi(float x,float y){
    float res;
    res=2*(x+y);
    cout<<"\nPerimeter of square: "<<res;
}