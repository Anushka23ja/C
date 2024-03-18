#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout;

    // Writing to the "country" file
    fout.open("country");
    if (!fout) {
        cerr << "Error opening country file." << endl;
        return 1;
    }
    fout << "USA\n";
    fout << "INDIA\n";
    fout << "SOUTH KOREA\n";
    fout.close();

    // Writing to the "capital" file
    fout.open("capital");
    if (!fout) {
        cerr << "Error opening capital file." << endl;
        return 1;
    }
    fout << "Washington \n";
    fout << "london \n";
    fout << "seoul \n";
    fout.close();

    const int n = 80;
    char line[n];
    ifstream fin;

    // Reading from the "country" file
    fin.open("country");
    if (!fin) {
        cerr << "Error opening country file." << endl;
        return 1;
    }
    cout << "Contents of country file" << endl;
    while (fin.getline(line, n)) {
        cout << line << endl; // Print the line along with a newline
    }
    fin.close();

    // Reading from the "capital" file
    fin.open("capital");
    if (!fin) {
        cerr << "Error opening capital file." << endl;
        return 1;
    }
    cout << "\nContents of capital file" << endl;
    while (fin.getline(line, n)) {
        cout << line << endl; // Print the line along with a newline
    }
    fin.close();

    return 0;
}
