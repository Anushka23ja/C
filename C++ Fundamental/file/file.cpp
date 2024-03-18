#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outf("item.txt"); 
    char name[30];
    float cost;

    cout << "Enter item Name: ";
    cin >> name; 
    outf << name << "\n";

    cout << "Enter item Cost: ";
    cin >> cost; 
    outf << cost << "\n";
    outf.close();

    ifstream inf("item.txt");
    inf >> name;
    inf >> cost;
    cout << "\n";
    cout << "Item Name: " << name << "\n";
    cout << "Item Cost: " << cost << "\n";
    inf.close();

    return 0;
}
