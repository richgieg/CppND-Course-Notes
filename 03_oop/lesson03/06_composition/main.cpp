#include <iostream>
#include <cmath>
#include <cassert>

#define PI 3.14159

// Define Line Class

    // Define protected attribute length

class LineSegment {
public:
    int length{0};
};

// Define Circle subclass

    // Define public setRadius() and getArea()
    
class Circle {
private:
    LineSegment& radius;
public:
    Circle(LineSegment& radius) : radius(radius) {}
    float getArea() {
        return PI * radius.length * radius.length;
    }
};

// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.getArea()) == 28);
    std::cout << radius.length << "\n";
}
