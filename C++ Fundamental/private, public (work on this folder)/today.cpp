#include<iostream>
using namespace std;
class stud{
    protected:int rno,m1,m2;
    public:void get()
    {
        cout<<"\nEnter rollno and marks for 2 subjects: ";
        cin>>rno>>m1>>m2;
    }
    public: void put()
    {
        cout<<"\nRoll no: "<<rno;
        cout<<"\nMark1: "<<m1;
        cout<<"\nMark2: "<<m2;
    }
};
class result: public stud
{
    protected:int tot, avg;
    public: void caltot()
    {
        tot=m1+m2;
        avg=tot/2;
        cout<<"\nTotal: "<<tot;
        cout<<"\nNavg: "<<avg;
    }
};
class remark: public result
{
    public: void show()
    {
        if(avg<50)
        {
            cout<<"\nremark=fail ";
        }
        else{
            cout<<"\nremark=pass ";
        }
    }
};
int main()
{
    remark r1;
    r1.get();
    r1.put();
    r1.caltot();
    r1.show();
}
