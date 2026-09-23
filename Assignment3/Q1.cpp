/*1. Create a class Student with private data members name and marks.
 Write a friend function to access and display these private data members. */
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    friend void displayStudent(const Student& s);
};

void displayStudent(const Student& s) {
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s("Alice", 85);
    displayStudent(s);
    return 0;
}