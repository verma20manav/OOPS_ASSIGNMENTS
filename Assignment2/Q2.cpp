/*2. Create a class Rectangle having data members length and breadth. 
Use a parameterized constructor to initialize the values and display the area of the rectangle.*/
#include <iostream>
using namespace std;

class Rectangle {
    double length;
    double breadth;
public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    void displayArea() {
        cout << "Area of the rectangle: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1(5, 3);
    r1.displayArea();
    return 0;
}