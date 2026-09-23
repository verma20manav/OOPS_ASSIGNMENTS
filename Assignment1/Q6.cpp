/*6. Create a code snippet that illustrates the following: 
a. Calling of private member functions inside public member function 
b. Access private member functions inside public member function */

#include <iostream>
using namespace std;

class FUNCTIONS {
private:
    void privateFunction() {
        cout << "This is a private member function." << endl;
    }
public:
    void publicFunction() {
        privateFunction(); // Calling private member function inside public member function
        cout << "This is a public member function." << endl;

    }
    void accessPrivateFunction() {
        privateFunction(); // Accessing private member function inside public member function
        cout << "Accessing private function from public function." << endl;
    }
};
int main() {
    FUNCTIONS obj;
    obj.publicFunction(); // Calling public member function
    obj.accessPrivateFunction(); // Accessing private member function through public member function

    return 0;
}