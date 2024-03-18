#include<iostream>
using namespace std;
class person{
    protected: string name; 
               int age ;
    public: void getdetails()
    {
        cout<<"\nEnter NAME and AGE of student: ";
        cin>>name>>age;
    }
     void setdetails()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};
class Student{
    protected:int studentID;
    public:
    void getstudentID()
    {
        cout<<"\nEnter Student ID: ";
        cin>>studentID;
    }
    void setstudentID()
    {
        cout<<"\nStudent ID: "<<studentID;
    }
};
class Employee {
    protected:int employeeID;
    public:
    void getemployeeID()
    {
        cout<<"\nEnter Employee ID: ";
        cin>>employeeID;
    }
    void setemployeeID()
    {
        cout<<"\nEmployee ID: "<<employeeID;
    }
};
class newnew: public person, public Student, public Employee{
    public: void get()
    {
        if(age>18)
        {
            getemployeeID();
            setemployeeID();
        }
        else{
            getstudentID();
            setstudentID();

        }
    }
};
int main()
{
    newnew obj1;
    obj1.getdetails();
    obj1.setdetails();
    obj1.get();

}