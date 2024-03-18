#include<iostream>
using namespace std;
class add{
    private:
        int a, b, res;
    public:
    void get(int x, int y){
        a=x;
        b=y;
    }

    int caltot(){
        res=a+b;
        return(res);
    }
};

int main(){
    int tot;
    add a1, a2;
    a1.get(23,70);
    tot=a1.caltot();
    cout<<"\nTotal: "<<tot;
    a2.get(56,90);
    tot=a2.caltot();
    cout<<"\nTotal: "<<tot;
}