#include <iostream>
#include <string>

class Animal {
public:
    std::string color;
    std::string name;
    int age;
};

class Snake : public Animal {
public:
    int length;
    void MakeSound() {
        std::cout << "Sssssssssssss!\n";
    }
};

class Cat : public Animal {
public:
    int height;
    void MakeSound() {
        std::cout << "Mrowwwwwwww!\n";
    }
};

int main() {
    Snake snake;
    snake.color = "green";
    snake.name = "Sammy";
    snake.age = 1;
    snake.length = 5;

    Cat cat;
    cat.color = "black";
    cat.name = "Caleb";
    cat.age = 3;
    cat.height = 1;

    snake.MakeSound();
    cat.MakeSound();
}
