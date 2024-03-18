#include<iostream>
using namespace std;
class test{
    private:
    int a, b;

    public:  
    void set(int x, int y){
        a=x;
        b=y;
    }

    void operator+(){
        if(a>b){
            cout<<"\nNMAX: "<<a;
        }
        else{
            cout<<"\nNMAX: "<<b;
        }
    }
};

int main(){
    test t;
    t.set(10,20);
    +t;
}
