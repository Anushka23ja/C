#include<iostream>
using namespace std;
class Vehicle
{
    protected: int one;
    public:
    void get()
    {         
        cout<<"Enter # of Vehicles: ";
        cin>>one;
        cout<<"I have "<<one<<" VEHICLE. ";
    }
    void set()
    {
        cout<<"\nI am in the VECHICLE SET function";
    }
};
class Car
{
    protected: int carvalue;
    public:
    void carget()
    {         
        cout<<"Enter # of Cars: ";
        cin>>carvalue;
        cout<<"\nI have "<<carvalue<<" CARS. ";
    }
    void carset()
    {
        cout<<"\nI am in the CAR SET function";
    }
};
class Motercycle: public Vehicle, public Car
{
    private: int calc;
    public:
    void sumvalue()
    {
        calc= one + carvalue;
        cout<<"The sum of CARS && VEHICLES: "<<calc;

    }
};
int main()
{
  Motercycle newobj;
  newobj.get();
  newobj.set();
  newobj.carget();
  newobj.carset();
  newobj.sumvalue();
}