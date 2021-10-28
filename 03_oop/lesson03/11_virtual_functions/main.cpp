#include <iostream>

class Animal {
public:
    virtual void Talk() const = 0;
};

class Human : public Animal {
public:
    void Talk() const {
        std::cout << "hello\n";
    }
};

int main() {
    Human human;
    human.Talk();
}
