/*4. Create a C++ program to demonstrate Hierarchical Inheritance. 
Create a base class Vehicle containing:  
    Brand
    Model  
Create two derived classes:  
    Car → Number of Doors  
    Bike → Engine Capacity 
Create separate objects of Car and Bike and display their respective details.
*/
#include <iostream>
#include <string>   
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
public:
    Vehicle(string b, string m) : brand(b), model(m) {}
};

class Car : public Vehicle {
private:
    int numberOfDoors;
public:
    Car(string b, string m, int doors) : Vehicle(b, m), numberOfDoors(doors) {}

    void displayCarDetails() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;
public:
    Bike(string b, string m, int capacity) : Vehicle(b, m), engineCapacity(capacity) {}

    void displayBikeDetails() {
        cout << "Bike Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 4);
    Bike bike("Honda", "CBR", 600);

    car.displayCarDetails();
    cout << endl;
    bike.displayBikeDetails();

    return 0;
}