#include <iostream>
#include <string>

class Student {
private:
    int roll_no;
    std::string name;
    int age;

public:
    // Constructor
    Student(int r, std::string n, int a) : roll_no(r), name(n), age(a) {}

    // Getter functions
    int getRollNo() { return roll_no; }
    std::string getName() { return name; }
    int getAge() { return age; }

    // Setter functions
    void setRollNo(int r) { roll_no = r; }
    void setName(std::string n) { name = n; }
    void setAge(int a) { age = a; }
};