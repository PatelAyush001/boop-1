#include <iostream>
#include <string>

class Person {
public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Original constructor called" << std::endl;
    }

    // Copy constructor
    Person(const Person& other) : name(other.name), age(other.age) {
        std::cout << "Copy constructor called" << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called" << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person p1("Alice", 30);

    // This will call the copy constructor
    Person p2 = p1;

    return 0;
}
