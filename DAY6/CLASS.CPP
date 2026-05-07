#include <iostream>
using namespace std;

class Car {
public:                                  // Access specifier

    // Data meembers
    string brand;
    int year;

    // member functions
    void display() {
        cout << brand << " " << year << endl;
    }
};

int main() {
    Car c1;        
    c1.brand = "Toyota";
    c1.year = 2020;
    
    Car c2;
    c2.brand = "Honda";
    c2.year =2024;

    Car c3;
    c3.brand = "Suzuki";
    c3.year = 2016;

    Car c4;
    c4.brand = "MI";
    c4.year = 2026;


     c1.display();
      c2.display();
       c3.display();
        c4.display();
    return 0;
}