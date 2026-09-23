/*3. Write a C++ program to create a class Employee with data members name, id, and salary.
 Initialize the data members using a parameterized constructor and display the employee details. */
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Surjit singh", 101, 50000.0);
    e1.display();
    return 0;
}