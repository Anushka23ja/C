#include<iostream>
using namespace std;
class sample{
    private:
        int no;
    public:
        void accept(){
            cout<<"Enter Any No: ";
            cin>>no;
        }

        void operator-();
        void display();
};

void sample::display(){
    cout<<"\nNo: "<<no;
}

void sample::operator-(){
    no--;
}

int main(){
    sample s;
    s.accept();
    s.display();
    -s;
    s.display();
}