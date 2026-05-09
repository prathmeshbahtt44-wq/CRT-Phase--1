#include <iostream>
using namespace std;

int main() {
    int value = 100;
    int *ptr = &value;

    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;

    *ptr = 200;

    cout << "Value (via pointer): " << *ptr << endl;
    cout << "Value (direct): " << value << endl;

    return 0;
}