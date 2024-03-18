#include<iostream>
using namespace std;
class student
{
    private: int rno, tot; //data members
             char nm[10];
    public:  void get();
             void put();
};

void student::get()
{

    cout<<"\nEnter name rno and totalmarks: ";
    cin>>nm>>rno>>tot;
}
void student::put()
{
    cout<<"\nName: "<<nm;
    cout<<"\nRollNo: "<<rno;
    cout<<"\nTotal: "<<tot;
}

int main(){
    student s1; //class object
    s1.get();
    s1.put();
}