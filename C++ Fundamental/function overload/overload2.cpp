//function overloading 
#include<iostream>
using namespace std;
void calarea(float); //function prototype
void calarea(float,float);
int main()
{
    float r, l, b;
    cout<<"\nEnter l b r: ";
    cin>>l>>b>>r;
    calarea(l,b);
    calarea(r);
}

void calarea(float x){
    float res;
    res=x*x*3.14;
    cout<<"\nArea of circle: "<<res;
}

void calarea(float x,float y)
{
    float res;
    res=x*y;
    cout<<"\nArea of rectangle: "<<res;
}