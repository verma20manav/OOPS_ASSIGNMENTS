/*1. Write a program (WAP) to display "Hello World" on console display. 
WAP to implement the following control characters: 
‘\n’ is for new line, or you can use endl – cout<<endl<<“message”;
‘\t’ is for tab ; ‘\a’ is an alarm sound; 
‘\r’ is carriage return to go to the beginning of the current line */

#include<iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl; // Display Hello World with a new line
    cout << "This is a new line\n"; // Using \n for new line
    cout << "This is a tab\tHere is the tabbed text" << endl; // Using \t for tab
    cout << "\aThis will trigger an alarm sound" << endl; // Using \a for alarm sound
    cout << "This is a carriage return\rOverwritten text" << endl; // Using \r for carriage return

    return 0;
}