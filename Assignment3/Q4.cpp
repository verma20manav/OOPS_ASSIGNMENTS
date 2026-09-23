/*4. Create a class Student with a static data member to keep track of the number of objects created.
 Create three objects and display the total number of objects. */

 #include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    // Constructor
    Student()
    {
        count++;
    }
    // Function to display count
    static void displayCount()
    {
        cout << "Total number of objects created: " << count << endl;
    }
};

// Initialize static data member
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student::displayCount();
    return 0;
}