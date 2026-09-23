/*3. Create a C++ program to demonstrate Multiple Inheritance. 
 Create two base classes: 
    Academic → stores Marks
    Sports → stores Sports Score
Create a derived class Result that inherits from both classes 
and calculates the  total score and displays the result. */
#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;
public:
    Academic(int m)
    {
        marks = m;

    }
};

class Sports {
protected:
    int sportsScore;
public:
    Sports(int score) {
        sportsScore = score;
    }
};

class Result : public Academic, public Sports {
public:
    Result(int academicMarks, int sportScore) : Academic(academicMarks), Sports(sportScore) {}

    void displayResult() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << marks + sportsScore << endl;
    }
};
int main() {
    Result r(85, 90);
    r.displayResult();
    return 0;
}