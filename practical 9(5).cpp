#include <iostream>

class MyClass {
private:
    int x;
    int y;

public:
    // Constructor with default arguments
    MyClass(int a = 0, int b = 0) : x(a), y(b) {
        std::cout << "Ctor\n";
    }
};

int main() {
    MyClass obj1; // Calls MyClass(0, 0)
    MyClass obj2(5); // Calls MyClass(5, 0)
    MyClass obj3(5, 7); // Calls MyClass(5, 7)

    return 0;
}
