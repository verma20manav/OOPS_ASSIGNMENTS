/*1. Write a C++ program to create a class Student with data members name and rollNo.
 Use a default constructor to initialize these values and display the student details*/
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
public:
    Student() {
        name = "Manav";
        rollNo = 67;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.display();
    return 0;
}