#include <iostream>
using namespace std;

// Parent Class
class Player {
public:
    string name;
    int age;

    Player(string n, int a) {
        name = n;
        age = a;
    }

    void displayPlayer() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Child Class (inherits Player)
class Cricketer : public Player {
public:
    int runs;

    Cricketer(string n, int a, int r)
        : Player(n, a) {
        runs = r;
    }

    void displayCricketer() {
        displayPlayer();
        cout << "Runs : " << runs << endl;
    }
};

// Grandchild Class (inherits Cricketer)
class Captain : public Cricketer {
public:
    string team;

    Captain(string n, int a, int r, string t)
        : Cricketer(n, a, r) {
        team = t;
    }

    void displayCaptain() {
        displayCricketer();
        cout << "Team : " << team << endl;
    }
};

int main() {

    Captain c1("Virat Kohli", 36, 14000, "India");

    c1.displayCaptain();

    return 0;
}