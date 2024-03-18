#include<iostream>
using namespace std;

int main(){
    int a=5, b=6, x,y;
    int *ptr;
    ptr = &a;
    x=*ptr+2;
    ptr=&b;
    y=*ptr-3;
    cout<<"\nX: "<<x<<"\nY: "<<y;
}