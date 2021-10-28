// Compile with: g++ -std=c++11 -fno-elide-constructors rule_of_five.cpp

#include <stdlib.h>
#include <iostream>

class MyMovableClass
{
private:
    int _size;
    int *_data;

public:
    MyMovableClass(size_t size) // constructor
    {
        _size = size;
        _data = new int[_size];
        std::cout << "CREATING instance of MyMovableClass at " << this << " allocated with size = " << _size*sizeof(int)  << " bytes" << std::endl;
    }

    ~MyMovableClass() // 1 : destructor
    {
        std::cout << "DELETING instance of MyMovableClass at " << this << std::endl;
        delete[] _data;
    }
    
    MyMovableClass(const MyMovableClass &source) // 2 : copy constructor
    {
        std::cout << "COPYING content of instance " << &source << " to instance " << this << std::endl;
        _size = source._size;
        _data = new int[_size];
        *_data = *source._data;
    }
    
    MyMovableClass &operator=(const MyMovableClass &source) // 3 : copy assignment operator
    {
        std::cout << "ASSIGNING content of instance " << &source << " to instance " << this << std::endl;
        if (this == &source)
            return *this;
        delete[] _data;
        _size = source._size;
        _data = new int[_size];
        *_data = *source._data;
        return *this;
    }

    MyMovableClass(MyMovableClass &&source) // 4 : move constructor
    {
        std::cout << "MOVING (c’tor) instance " << &source << " to instance " << this << std::endl;
        _data = source._data;
        _size = source._size;
        source._data = nullptr;
        source._size = 0;
    }

    MyMovableClass &operator=(MyMovableClass &&source) // 5 : move assignment operator
    {
        std::cout << "MOVING (assign) instance " << &source << " to instance " << this << std::endl;
        if (this == &source)
            return *this;
        delete[] _data;
        _data = source._data;
        _size = source._size;
        source._data = nullptr;
        source._size = 0;
        return *this;
    }
};

// copying
// int main()
// {
//     MyMovableClass obj1(100), obj2(200); // constructor

//     MyMovableClass obj3(obj1); // copy constructor

//     MyMovableClass obj4 = obj1; // copy constructor

//     obj4 = obj2; // copy assignment operator

//     return 0;
// }

// // moving
// int main() {
//     MyMovableClass obj1(100); // constructor

//     obj1 = MyMovableClass(200); // move assignment operator

//     MyMovableClass obj2 = MyMovableClass(300); // move constructor 

//     return 0;
// }



// fuckaround

// MyMovableClass createObject(int size){
//     MyMovableClass obj(size); // regular constructor
//     return obj; // return MyMovableClass object by value
// }

// int main() {
//     MyMovableClass obj = createObject(200);
//     return 0;
// }


// Passing instance as rvalue, triggering move semantics

// void useObject(MyMovableClass obj)
// {
//     std::cout << "using object " << &obj << std::endl;
// }

// int main()
// {
//     MyMovableClass obj1(100); // constructor

//     useObject(obj1); // copy constructor
//     useObject(MyMovableClass(200)); // move constructor

//     return 0;
// }


void useObject(MyMovableClass obj)
{
    std::cout << "using object " << &obj << std::endl;
}

int main()
{
    MyMovableClass obj1(100); // constructor

    useObject(obj1); // copy constructor
    useObject(std::move(obj1)); // move constructor (std::move presents obj1 as an r-value to the function)
    // DANGER: obj1 is now invalidated since ownership was transferred in the previous line
    // (its _data member is now nullptr, so it can no longer be used)

    return 0;
}
