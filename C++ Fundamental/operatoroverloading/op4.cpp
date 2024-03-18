#include<iostream>
using namespace std;
class test{
    private:
    int a,b;

    public:  
    void set(int x, int y);
    void operator+();
};
void test::set(int x, int y){
    a=x;
    b=y;
}
void test::operator+(){
    if(a>b){
        cout<<"\nMax No: "<<a;
    }
    else{
        cout<<"\nMax No: "<<b;
    }
}

int main(){
    test t;
    t.set(10,20);
    +t;
}