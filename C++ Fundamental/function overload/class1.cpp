#include<iostream>
using namespace std;
class student
{
private: int rno, tot;
    char nm[10];
public:
void get()
{
    cout<<"\nEnter name rno and totalmarks";
    cin>>nm>>rno>>tot;
}
void put()
{
    cout<<"\nName:"<<nm;
    cout<<"\nRollno:"<<rno;
    cout<<"\nTotal:"<<tot;
}
};
int main()
{
    student s1; //class object
    s1.get();
    s1.put();
}