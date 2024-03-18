#include<iostream>
using namespace std;
//prog find the area of a circle from given radius 
int main()
{
    float r, area;
    const float pi = 3.14;
    cout<<"\nEnter radius to find the area: ";
    cin>>r;

    area=pi*r*r;
    cout<<"\nArea of Circle is: "<<area;
}