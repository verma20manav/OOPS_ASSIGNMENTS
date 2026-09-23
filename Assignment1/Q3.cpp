/*3. WAP to demonstrate for, while, do-while (with all possible variations),
 like for loop can be demonstrated without giving initialization in for construct 
 or without giving increment in for construct.  
 Sample: for (int i=0; i<10; i++) 
         i=0 for (; i<10; i++) 
         i=0 for (; i<10;) i++ */
#include <iostream>
using namespace std;

int main() {
    // For loop with initialization, condition, and increment
    cout << "For loop with initialization, condition, and increment:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // For loop without initialization
    cout << "For loop without initialization:" << endl;
    int j = 0;
    for (; j < 10; j++) {
        cout << j << " ";
    }
    cout << endl;

    // For loop without increment
    cout << "For loop without increment:" << endl;
    int k = 0;
    for (; k < 10;) {
        cout << k << " ";
        k++; // Incrementing inside the loop body
    }
    cout << endl;

    // While loop
    cout << "While loop:" << endl;
    int m = 0;
    while (m < 10) {
        cout << m << " ";
        m++;
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    int n = 0;
    do {
        cout << n << " ";
        n++;
    } while (n < 10);
    cout << endl;

    return 0;
}