#include<iostream>
using namespace std;
void calsum(int); 
void calsum(int,int);
int main()
{
    int radius, length, width;
    cout<<"\nEnter Radius to find the circle area: ";
    cin>>radius;
    cout<<"\nEnter Length and Width to find the Rectangle area: ";
    cin>>length>>width;
    calsum(radius);
    calsum(length, width);
}
void calsum(int radius)
{
    int circlesum;
    circlesum=3.14+(radius*radius);
    cout<<"\nArea of CIRCLE: "<<circlesum;
}
void calsum(int length, int width)
{
    int rectanglesum;
    rectanglesum = length * width;
    cout<<"\nAREA OF RECTANGLE: "<< rectanglesum;
}