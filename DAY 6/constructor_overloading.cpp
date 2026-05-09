#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string email;
    long long mobile;
    string batch;
    string crtClass;

public:

    // Default Constructor
    Student() {
        name = "Not Available";
        rollNo = 0;
        email = "N/A";
        mobile = 0;
        batch = "N/A";
        crtClass = "N/A";

        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(string n, int r, string e, long long m, string b, string c) {
        name = n;
        rollNo = r;
        email = e;
        mobile = m;
        batch = b;
        crtClass = c;

        cout << "Parameterized Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Email ID   : " << email << endl;
        cout << "Mobile No  : " << mobile << endl;
        cout << "Batch      : " << batch << endl;
        cout << "CRT Class  : " << crtClass << endl;
    }
};

int main() {

    // Object using default constructor
    Student s1;
    s1.display();

    // Object using parameterized constructor
    Student s2(
        "Prathmesh",
        101,
        "prathmesh@gmail.com",
        9876543210,
        "CSE-A",
        "Morning"
    );

    s2.display();

    return 0;
}