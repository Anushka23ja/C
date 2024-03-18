#include<iostream>
using namespace std;
class base{
    public: 
    virtual void show(){
        cout<<"\nBase Class: "; 
    }
};

class derived: public base{
        public:  
        void show(){
            cout<<"\nDerived Class: ";
        }
};

int main(){
    derived d1;
    base b1;
    base *ptr;
    ptr = &b1;
    ptr->show();
    return 0;
}