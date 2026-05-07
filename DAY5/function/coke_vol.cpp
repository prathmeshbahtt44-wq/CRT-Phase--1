#include <iostream>
using namespace std;

int totalVolume(int bottles) {
    return bottles * 250; 
}

int main() {
    int n;
    cout << "Enter number of bottles: ";
    cin >> n;

    int result = totalVolume(n);

    cout << "Total volume = " << result << " ml";

    return 0;
}