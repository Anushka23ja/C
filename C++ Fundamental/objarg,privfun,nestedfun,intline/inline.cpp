#include<iostream>
using namespace std;
inline int sq(int no){
    int res;
    res=no*no;
    return res;
}

int main(){
    int no, res1;
    cout<<"Enter any Num: ";
    cin>>no;
    res1= sq(no);
    cout<<"\nSquare: "<<res1;
    res1= sq(6);
    cout<<"\nSquare: "<<res1;
}