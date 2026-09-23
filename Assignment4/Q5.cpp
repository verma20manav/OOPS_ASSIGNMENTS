/*5. Create a base class College with a constructor that initializes the College  Name.
 Create a derived class Department with a constructor that initializes  the Department Name. 
  Create an object of the derived class and display both college and 
  department  information to show the order of constructor execution.
*/
#include <iostream>
#include <string>
using namespace std;

class College {
protected:
    string collegeName; 
public:
    College(string name) : collegeName(name) {
        cout << "College constructor called." << endl;
    }
};

class Department : public College {
private:
    string departmentName;
public:
    Department(string collegeName, string deptName) : College(collegeName), departmentName(deptName) {
        cout << "Department constructor called." << endl;
    }

    void displayInfo() {
        cout << "College: " << collegeName << endl;
        cout << "Department: " << departmentName << endl;
    }
};
int main() {
    Department dept("Thapar University", "Computer Science");
    dept.displayInfo();
    return 0;
}