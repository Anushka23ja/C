#include<iostream>
using namespace std;
int main()
{
    char nm[10];
    int rno , m1, m2, m3, tot, avg;
    cout<<"\n Enter name: ";
    cin>>nm;
    cout<<"\n Enter Rollno: ";
    cin>>rno;
    cout<<"\n Enter marks for three subject: ";
    cin>>m1>>m2>>m3;
    tot=m1+m2+m3;
    avg=tot/3;
    cout<<"\nTotal: "<<tot<<"\navg: "<<avg;

    if(avg<50)
    {
        cout<<"\nRemark = fail";
    }
    else if(avg>=50 && avg<60)
    {
        cout<<"\nRemark = pass";
    }
    else if(avg>=60 && avg<70)
    {
        cout<<"\nRemark = first class";
    }
    else{
        cout<<"\nRemark = distiction";
    }
}