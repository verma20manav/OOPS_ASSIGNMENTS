/*7. Create a class Demo that displays a message when its constructor is called and another message 
when its destructor is called. Create multiple objects of the class and observe the order in 
which constructors and destructors execute. */
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called for an object of Demo class." << endl;
    }
    ~Demo() {
        cout << "Destructor called for an object of Demo class." << endl;
    }
};

int main() {
    Demo d1;
    return 0;
}