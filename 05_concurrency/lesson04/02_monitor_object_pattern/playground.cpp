#include <iostream>
#include <vector>

class MyClass {
public:
    MyClass() {
        _id = _instanceCounter++;
        std::cout << "instance " << _id << ": constructor called\n";
    }
    MyClass(MyClass&& other) {
        _id = _instanceCounter++;
        std::cout << "instance " << _id << ": move constructor called, adopting id " << other._id << "\n";
        _id = other._id;
    }
private:
    int _id;
    static int _instanceCounter;
};

int MyClass::_instanceCounter = 0;

int main() {
    // The following creates an instance of MyClass in place.
    // No arguments are passed to emplace_back because the MyClass
    // constructor takes no arguments.
    // Prints:
    // instance 0: constructor called
    std::vector<MyClass> v1;
    v1.emplace_back();
    
    // The following creates an instance of MyClass which is then
    // moved into the vector.
    // Prints:
    // instance 1: constructor called
    // instance 2: move constructor called, adopting id 1
    std::vector<MyClass> v2;
    v2.emplace_back(MyClass());

    // The following creates an instance of MyClass which is then
    // moved into the vector.
    // Prints:
    // instance 3: constructor called
    // instance 4: move constructor called, adopting id 3
    std::vector<MyClass> v3;
    v3.push_back(MyClass());
}
