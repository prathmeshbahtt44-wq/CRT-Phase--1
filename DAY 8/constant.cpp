#include <iostream>
using namespace std;

int main() {
    const int age = 20;

    cout << "Age = " << age << endl;

    // age = 25; ❌ Error: cannot change a constant variable

    return 0;
}