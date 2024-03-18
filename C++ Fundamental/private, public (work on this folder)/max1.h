#include<iostream>
using namespace std;
class maxdemo{
    private: int a,b;
    public: maxdemo(int x,int y)
    {
        a=x;
        b=y;
    }
    void calmax()
    {
        if(a>b)
        {
            cout<<"\nMax No: "<<a;
        }
        else{
            cout<<"\nMax No: "<<b;
        }
    }
};