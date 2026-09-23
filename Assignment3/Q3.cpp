/*3. Create a class Employee with a private data member salary. 
Create two objects and use a friend function to compare their salaries 
and display the higher salary. */
#include <iostream>
using namespace std; 

class Employee {
private:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }

    friend void compareSalaries(const Employee& e1, const Employee& e2);
};

void compareSalaries(const Employee& e1, const Employee& e2) {
    if (e1.salary > e2.salary) {
        cout << "Higher salary: " << e1.salary << endl;
    } else {
        cout << "Higher salary: " << e2.salary << endl;
    }
}

int main() {
    Employee emp1(50000);
    Employee emp2(60000);
    compareSalaries(emp1, emp2);
    return 0;
}