#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int speed = 0;
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels and is going " << speed << " MPH!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Plane : public Vehicle {
public:
    int altitude = 0;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.speed = 55;
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";

    Plane plane;
    plane.wheels = 2;
    plane.color = "gray";
    plane.speed = 700;
    plane.Print();
};
