#include <iostream>
using namespace std;

class MyClass {
public:
    // Overloaded constructors
    MyClass() {
        cout << "Constructor 1 called" << endl;
    }

    MyClass(int x) {
        cout << "Constructor 2 called with x = " << x << endl;
    }

    MyClass(int x, int y) {
        cout << "Constructor 3 called with x = " << x << " and y = " << y << endl;
    }
};

int main() {
    // Calling different constructors
    MyClass obj1; // Calls Constructor 1
    MyClass obj2(5); // Calls Constructor 2
    MyClass obj3(5, 6); // Calls Constructor 3

    return 0;
}
