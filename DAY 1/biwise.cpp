#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Enter two integers (A and B): ";
    cin >> A >> B;

    int multiplyA = A << 2;  
    int divideB = B >> 3;    

    cout << "A * 4 = " << multiplyA << endl;
    cout << "B / 8 = " << divideB << endl;

    return 0;
}