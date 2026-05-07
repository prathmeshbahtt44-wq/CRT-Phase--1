#include <iostream>
using namespace std;

int main() {
    int i = 3;   

    while(i <= 36) {
        if(i % 3 == 0) {
            cout << i << endl;
        }
        i = i + 3;
    }

    return 0;
}
 