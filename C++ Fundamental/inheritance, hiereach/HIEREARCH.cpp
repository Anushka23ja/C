#include<iostream>
using namespace std;
class number{
    protected:
    int no;
    public:
    void get()
    {
        cout<<"Enter a number: ";
        cin>>no;
    }
};
class square:public number{
    private:
    int res;
    public:
    void calsq() 
    {
        res=no*no;
        cout<<"\nSquare: "<<res;

    }
};
class cube:public number{
    private: 
       int res;
    public:  
    void calcube()
    {
        res=no*no*no;
        cout<<"\nCube: "<<res;
    }
};
int main()
{
    square s;
    cube c;

    s.get();
    s.calsq();
    c.get();
    c.calcube();
}