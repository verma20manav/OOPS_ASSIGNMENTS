/*5. Write a program to demonstrate constructor overloading using a class Student.
 Create:
    a default constructor,  
    a constructor accepting name and roll number,  
    a constructor accepting name, roll number, and CGPA.  
Display the details of objects created using all three constructors. */
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNumber;
    double CGPA;
public:
    Student() {
        name = "";
        rollNumber = 0;
        CGPA = 0.0;
    }
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        CGPA = 0.0;
    }
    Student(string n, int r, double c) {
        name = n;
        rollNumber = r;
        CGPA = c;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};
int main() {
    Student s1; // Default constructor
    Student s2("Manav", 123); // Constructor with name and roll number
    Student s3("kirti", 456, 3.8); // Constructor with name, roll number, and CGPA

    cout << "Details of Student 1 (Default Constructor):" << endl;
    s1.displayDetails();
    cout << endl;

    cout << "Details of Student 2 (Constructor with Name and Roll Number):" << endl;
    s2.displayDetails();
    cout << endl;

    cout << "Details of Student 3 (Constructor with Name, Roll Number, and CGPA):" << endl;
    s3.displayDetails();
    cout << endl;

    return 0;
}