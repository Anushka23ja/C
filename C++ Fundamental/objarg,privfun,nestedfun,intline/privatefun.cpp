#include<iostream>
using namespace std;
class test{
    private:  
    void display(){
        cout<<"\nHello";
    }
    public:
    void show(){
        display();
    }
};

int main(){
    test t1;
    t1.show();
}