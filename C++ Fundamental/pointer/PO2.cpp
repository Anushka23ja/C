#include<iostream>
using namespace std;
class stud{
    private: 
    char nm[10];
    int rno;
    public:

    void getdata(){
        cout<<"\nEnter Name and RollNo: ";
        cin>>nm>>rno;
    }
    
    void putdata(){
        cout<<"\nName: "<<nm;
        cout<<"\nRollNo: "<<rno;
    }
};

int main(){
    stud s1, s2;
    stud *ptr;
    ptr=&s1;
    ptr->getdata();
    ptr->putdata();
    ptr=&s2;
    ptr->getdata();
    ptr->putdata();
}