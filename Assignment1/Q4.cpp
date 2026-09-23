/*4. Create a structure in C++ containing the details of Students as details below and a main function to execute the structure.
  Data Members(properties): 
    Name
    Roll No
    Degree
    Hostel
    CurrentCGPA
  Member Function(behavior):
   addDetails(); 
   updateDetails(); 
   updateCGPA(); 
   updateHostel(); 
   displaydetails(); 
*/
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // ignore the newline character after rollNo input
        cout << "Enter Degree: ";
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }
    void updateDetails(){
        cout << "Update Name: ";
        cin.ignore(); // ignore the newline character after previous input
        getline(cin, name);
        cout << "Update Roll No: ";
        cin >> rollNo;
        cin.ignore(); //ignore the newline character after rollNo input
        cout << "Update Degree: ";
        getline(cin, degree);
    }
    void updateCGPA(){
        cout << "Update Current CGPA: ";
        cin >> currentCGPA;
    }
    void updateHostel(){
        cout << "Update Hostel: ";
        cin.ignore(); // ignore the newline character after previous input
        getline(cin, hostel);
    }
    void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};
int main() {
    Student student;

    student.addDetails();
    student.displayDetails();

    student.updateDetails();
    student.updateCGPA();
    student.updateHostel();
    student.displayDetails();

    return 0;
}