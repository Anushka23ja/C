#include<iostream>
using namespace std;
class stud{
    protected: int rno;
    char nm[10];
    public: void get()
    {
        cout<<"\nEnter rollno and name: ";
        cin>>rno>>nm;
    }
    void put()
    {
        cout<<"\nRollno: "<<rno;
        cout<<"\nName: "<<nm;
    }
};
class mark{
    protected:int m1,m2;
    public:
    void getm()
    {
        cout<<"\nEnter marls for 2 subs: ";
        cin>>m1>>m2;
    }
    void putm()
    {
        cout<<"\nMark1: "<<m1;
        cout<<"\nMark2: "<<m2;
    }
};
class result:public stud,public mark 
{
    protected: int tot,avg;
    public: void caltot()
    {
        tot=m1+m2;
        avg=tot/2;
        cout<<"\ntotal: "<<tot;
        cout<<"\navg: "<<avg;
    }
};
class remark: public result{
    public: void show()
    {
        if(avg>50)
        {
            cout<<"\nremark: fail";
        }
        else{
            cout<<"\nremark: pass";

        }
    }
};
int main()
{
    remark r1;
    r1.get();
    r1.put();
    r1.getm();
    r1.putm();
    r1.caltot();
    r1.show();
}