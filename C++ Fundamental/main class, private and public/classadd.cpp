#include<iostream>
using namespace std;
class add{
    private: int a, b, res;
    public:
    
    void get()
    {
        cout<<"\n Enter two Nums: ";
        cin>>a>>b;
    }
  
    void caltot()
    {
        res=a+b;
        cout<<"\nSum: "<<res;
    }
};

int main(){
    add a1;
    a1.get();
    a1.caltot();
}