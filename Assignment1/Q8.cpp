/*8. Implement namespace in a program to illustrate the use of same name variables and functions in different sections/libraries of the code*/
#include <iostream>
using namespace std;

namespace NS1 {
    int x = 10;
    void func() {
        cout << "Function from NS1" << endl;
    }
}

namespace NS2 {
    int x = 20;
    void func() {
        cout << "Function from NS2" << endl;
    }
}

int main() {
    cout << "NS1::x = " << NS1::x << endl;
    cout << "NS2::x = " << NS2::x << endl;
    NS1::func();
    NS2::func();
    return 0;
}