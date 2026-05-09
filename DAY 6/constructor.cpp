#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;

    // Default constructor

    student() {
        name = "unknown";
          age = 0;
          cout << "Default constructor called" <<endl;
    }
    // parameterized constructor
    student(string n, int a) {
        name = n ;
        age = a;
        cout << "Parametrized constructor called" << endl;
    }
    // Copy constructor
    student (const student &s) {
        name = s.name;
        age = s.age;
        cout << "copy constructor called" << endl;
    }

    void display() {
        cout << "Name:" << name << ",Age" << age << endl;
    }
};

int main () {

    student s1;
    s1.display ();

    student s2 ("prathm",22);
    s2.display();

    student s3 = s2;
    s3.display();
}