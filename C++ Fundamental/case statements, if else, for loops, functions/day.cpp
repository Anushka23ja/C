#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter a day of week in num (1-7): ";
    cin>>day;
    switch(day)
    {
        case 1: cout<<"\nMonday";
        break;
        case 2: cout<<"\nTuesday";
        break;
        case 3: cout<<"\nWednesday";
        break;
        case 4: cout<<"\nThursday";
        break;
        case 5: cout<<"\nFriday";
        break;
        case 6: cout<<"\nSaturday";
        break;
        case 7: cout<<"Sunday";
        break;
        default: cout<<"\nInvaid Num, Try again";
        break;

    }
}