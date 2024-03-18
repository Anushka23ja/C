#include<iostream>
using namespace std;
class square{
    private: 
    int no;
   
    public:
    void get();
    int calc();
    void display();
};
void square::get(){
    cout<<"Enter any number: ";
    cin>>no;
}

int square::calc(){
    int sq;
    sq=no*no;
    return sq;
}

void square::display(){
    cout<<"\nNo: "<<no;
    cout<<"\nSquare: "<<calc();
}

int main(){
    square s;
    s.get();
    s.display();
}