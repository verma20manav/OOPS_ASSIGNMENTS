/*7. Define a class named Complex with properties (real and imaginary) and methods as per following details.
 void set () to initialize object values. 
 void display () to display complex number. 
 Complex sum (Complex) or void sum (Complex) to add two complex numbers 
 (objects of Complex class) and return complex_number (object of Complex class) as result.
Properties (real and imaginary) of the code should have private access modifier and 
member functions should have public access modifier in C++ class
*/
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    void set(double r, double i) {
        real = r;
        imaginary = i;
        
    }
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imaginary << endl;
    }
    Complex sum(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};
int main() {
    Complex c1, c2, c3;
    c1.set(3.5, 2.5);
    c2.set(1.5, 4.5);
    c3 = c1.sum(c2);
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum of the two complex numbers: ";
    c3.display();

    return 0;
}