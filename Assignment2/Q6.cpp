/*6. Create a class Complex with real and imaginary data members. 
    Implement: 
     a default constructor,  
     a parameterized constructor,  
     a display function. */
    #include <iostream>
    using namespace std;
    
class Complex {
    double real;
    double imaginary;
public:
    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    Complex c1; // default constructor
    Complex c2(3.5, 2.5); // parameterized constructor

    cout << "Default Constructor: ";
    c1.display();

    cout << "Parameterized Constructor: ";
    c2.display();

    return 0;
}