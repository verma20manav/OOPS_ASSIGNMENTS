/*1. Create a C++ program to demonstrate Single Inheritance.  
Create a base class Person with the following data members:  
        Name  
        Age  
Create a derived class Student having: 
         Roll Number
         Course  
Implement member functions to accept and display the complete details of a  student using inheritance.*/
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;
public:
    Student(string n, int a, int roll, string c) : Person(n, a) {
        rollNumber = roll;
        course = c;
    }
    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};
int main() {
    Student s("Manav", 20, 101, "Computer Science");
    s.displayStudentDetails();
    return 0;
}