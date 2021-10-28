#include <string>
#include <cstring>
#include <iostream>

int constexpr BRAND_LENGTH = 256;

class Car {
private:
    int horsepower;
    int weight;
    char brand[BRAND_LENGTH];
public:
    int Horsepower() const;
    void Horsepower(int horsepower);
    int Weight() const;
    void Weight(int weight);
    std::string Brand() const;
    void Brand(std::string brand);
};

int Car::Horsepower() const {
    return horsepower;
}

void Car::Horsepower(int horsepower) {
    Car::horsepower = horsepower;
}

int Car::Weight() const {
    return weight;
}

void Car::Weight(int weight) {
    Car::weight = weight;
}

std::string Car::Brand() const {
    return brand;
}

void Car::Brand(std::string brand) {
    strncpy(Car::brand, brand.c_str(), BRAND_LENGTH);
}

int main() 
{
    Car car;
    car.Brand("Peugeot");
    std::cout << car.Brand() << "\n";   
}
