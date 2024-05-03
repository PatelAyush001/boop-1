#include <iostream>
using namespace std;

class Circle {
  private:
    double radius;

  public:
    Circle(double r) : radius{r} {}

    double calculateArea() {
      return 3.14 * radius * radius;
    }
};

class Rectangle {
  private:
    double length;
    double width;

  public:
    Rectangle(double l, double w) : length{l}, width{w} {}

    double calculateArea() {
      return length * width;
    }
};

int main() {
  Circle circle(5.5);
  Rectangle rectangle(10.5, 8.6);

  cout << "Area of Circle: " << circle.calculateArea() << endl;
  cout << "Area of Rectangle: " << rectangle.calculateArea();

  return 0;
}
