/*5. Differentiate between private and public access/scope. 
Perform the question no. 4 with class instead of structure with having 
the data members private and some member functions in private scope and some in public scope. */
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;
public:
    Student() {
        name = "";
        rollNo = 0;
        degree = "";
        hostel = "";
        currentCGPA = 0.0;
    }

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

    void updateDetails() {
        cout << "Update Name: ";
        cin.ignore(); // ignore the newline character after previous input
        getline(cin, name);
        cout << "Update Roll No: ";
        cin >> rollNo;
        cin.ignore(); //ignore the newline character after rollNo input
        cout << "Update Degree: ";
        getline(cin, degree);
    }

    void updateCGPA() {
        cout << "Update Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Update Hostel: ";
        cin.ignore(); // ignore the newline character after previous input
        getline(cin, hostel);
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};
int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    s.updateDetails();
    s.updateCGPA();
    s.displayDetails();
    return 0;
}   