/*8. Write a C++ program to demonstrate the execution order of constructors and destructors
when objects are created inside main() and inside a separate function. */
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() 
    {
        cout << "Constructor called for an object of Demo class." << endl;
    }
    ~Demo() 
    {
        cout << "Destructor called for an object of Demo class." << endl;
    }
};

void createObjects()
{
    cout << "Creating objects inside function." << endl;
    Demo d4;
    Demo d5;
}

int main() 
{
    cout << "Creating objects inside main() function." << endl;
    Demo d1;
    Demo d2;
    Demo d3;
    createObjects();
    return 0;
}