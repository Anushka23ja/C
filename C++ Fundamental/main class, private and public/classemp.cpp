#include<iostream>
using namespace std;
class emp{
    private: int eno;
             char nm[10];
             long int bsal, hra, da, pf, netsal;
    public: 
    void get(){
        cout<<"Enter Name, Empno and Salary: ";
        cin>>nm>>eno>>bsal;
    }

    void calsal(){
        hra=(bsal*10)/100;
        da=(bsal*7)/100;
        pf=(bsal*5)/100;
        netsal= bsal+hra+da-pf;
    }

    void put(){
        cout<<"\n=================Employee Salary Calculation=================";
        cout<<"\nName: "<<nm;
        cout<<"\nEmpno: "<<eno;
        cout<<"\nBasic Salary: "<<bsal;
        cout<<"\nHra: "<<hra;
        cout<<"\nDa: "<<da;
        cout<<"\nNpf: "<<pf;
        cout<<"\nNet Salary: "<<netsal;
    }
};

int main(){
    emp e1; //class object
    e1.get();
    e1.calsal();
    e1.put();
}