/*2. Create a C++ program to demonstrate Multilevel Inheritance. 
Create three classes:
    Person → stores Name
    Employee → stores Employee ID
    Manager → stores Department  
Derive Employee from Person and Manager from Employee. Display all the  details of the manager.  */
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n, int id) : Person(n) {
        employeeID = id;
    }
    void displayEmployeeDetails() {
        displayPersonDetails();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id) {
        department = dept;
    }
    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Vikram Gupta", 420, "IT");
    m.displayManagerDetails();
    return 0;
}