#include<iostream>
using namespace std;
class test{
    private:  
    int a, b, c;

    public:
    void set( int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }
    void operator-(){
        a=-a;
        b=-b;
        c=-c;
    }
    void display(){
        cout<<"\na: "<<a;
        cout<<"\nb: "<<b;
        cout<<"\nc: "<<c;
    }
};

int main(){
    test t;
    t.set(10,20,-30);
    t.display();
    -t;
    t.display();
}
