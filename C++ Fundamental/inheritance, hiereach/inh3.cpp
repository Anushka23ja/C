#include<iostream>
using namespace std;
class stud{
    protected: int rno;
    char nm[10];
    public: void get()
    {
        cout<<"\nEnter rollno and name ";
        cin>>rno>>nm;
    }
    void put()
    {
        cout<<"\nRollno: "<<rno;
        cout<<"\nName: "<<nm;
    }
};
class marks
{
    protected: int m1,m2;
    public:
    void getm()
    {
        cout<<"\nEnter marka for 2 sub: ";
        cin>>m1>>m2;
    }
    void putm()
    {
        cout<<"\nMark1: "<<m1;
        cout<<"\nMark2: "<<m2;
    }
};
class result: public stud,public marks{
    private: int tot,avg;
    public: void caltot()
    {
        tot=m1+m2;
        avg=tot/2;
        cout<<"\ntotal:" <<tot;
        cout<<"\navg:" <<avg;
    }
};
int main()
{
    result r1;
    r1.get();
    r1.put();
    r1.getm();
    r1.putm();
    r1.caltot();
}