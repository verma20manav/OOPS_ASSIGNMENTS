/*2. Write a C++ program that will ask for a temperature in Celsius and display it in degree Fahrenheit.[F=9C/5+32] */
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius) / 5 + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}