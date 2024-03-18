#include<iostream>
using namespace std;
class rectangle{
    protected: int one, two, three, four, sum;
    public: void get()
    {
        cout<<"\nEnter 4 values of perameter ";
        cin>>one>>two>>three>>four;
    }
    void put()
    {
        sum = one + two + three + four;
        cout<<"\nPerameter of Rectangle "<<sum;
        
    }
};

int main()
{
    rectangle test;
    test.get();
    test.put();
}