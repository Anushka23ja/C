#include <iostream>
using namespace std;

class test2 {
private:
    int a, b;

public:
    void getdata();
    friend void calsum(const test2 &t1);
};

void test2::getdata() {
    cout << "Enter 2 nums: ";
    cin >> a >> b;
}

void calsum(const test2 &t1) {
    int res = t1.a + t1.b;
    cout << "Sum: " << res << endl;
}

int main() {
    test2 t1;
    t1.getdata();
    calsum(t1);
    return 0; 
}
