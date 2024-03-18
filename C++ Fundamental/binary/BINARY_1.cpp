#include<iostream>
using namespace std;

class sample{
    int x;
    int y;
    public:
    sample(){
        x=0;
        y=0;
    }

    sample(int real, int imag){
        x=real;
        y=imag;
    }
    sample operator+(sample);
    void display();
};

sample sample::operator+(sample s){
    sample temp;
    temp.x = x + s.x;
    temp.y = y + s.y;
    return temp;
}

void sample::display(){
    cout << "Real Part: " << x << ", Imaginary Part: " << y << endl;
}

int main(){
    sample s1,s2,s3;
    s1=sample(2,3);
    s2=sample(1,2);
    s3=s1+s2;

    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    cout << "s3: "; s3.display();
}
