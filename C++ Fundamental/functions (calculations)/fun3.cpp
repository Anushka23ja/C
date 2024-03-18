#include<iostream>
using namespace std;
void display();
int main()
{
    int i;
    for(i=1;i<=5;i++){
        display();
    }
}

void display(){
    cout<<"\nHello";
}