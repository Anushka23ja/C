#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int main(){
    int n;
    int n1= 80;
    char line [n1];

    cout<<"Enter Num of Inter: ";
    cin>>n;

    ofstream outFile("numbers.txt");
    cout<<"Enter "<<n<<" integers: \n";
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        outFile<<num<<" ";
    }

    //read int from file and seperate them into even and odd:
    ifstream inFile("numbers.txt");
    ofstream evenFile("even_numbers.txt");
    ofstream oddFile("odd_numbers.txt");

    while(!inFile.eof()){
        int num;
        inFile>>num;

        if(!inFile.fail()){
            if(num%2 == 0){
                evenFile<<num<<" ";
            }
            else{
                oddFile<<num<<" ";
            }
        }
    }

inFile.close();
evenFile.close();
oddFile.close();

cout<<"Numbers have been written to numbers.txt\n";
cout<<"Even Nums have been written to even_numbers.txt\n";
cout<<"Odd Nums have been written to off_numbers.txt\n";

return 0;
}


