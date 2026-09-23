/*4. Create a class Box with data members length, width, and height. Implement: 
 a. default constructor,  
 b. parameterized constructor,  
 c. function to calculate and display volume.*/
#include <iostream>
using namespace std;

class Box {
    double length;
    double width;
    double height;
public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    void displayVolume() {
        cout << "Volume of the box: " << length * width * height << endl;
    }
};

int main() {
    Box b1; // default constructor
    Box b2(5, 3, 2); // parameterized constructor

    b1.displayVolume();
    b2.displayVolume();

    return 0;
}