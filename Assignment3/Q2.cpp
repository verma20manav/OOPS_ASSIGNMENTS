/*2. Create a class Number with two private data members a and b. 
Use a friend function to access these members and calculate and display their sum*/
#include <iostream>
using namespace std;

class Number {
private:
    int a;
    int b;

public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void calculateSum(const Number& n);
};

void calculateSum(const Number& n) {
    int sum = n.a + n.b;
    cout << "Sum: " << sum << endl;
}

int main() {
    Number num(5, 10);
    calculateSum(num);
    return 0;
}