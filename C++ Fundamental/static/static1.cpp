#include<iostream>
using namespace std;
class item{
    private: 
    static int count;
    int no;

    public:
    void getdata(int a){
        no = a;
        count++;
    }
    void getcount(){
        cout<<"\nCount: "<<count;
    }
};
int item::count; //count defined

int main(){
item x,y,z;
x.getcount();
y.getcount();
z.getcount();
x.getdata(100);
y.getdata(200);
z.getdata(300);
x.getcount();
y.getcount();
z.getcount();
}