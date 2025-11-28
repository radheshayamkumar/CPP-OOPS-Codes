#include <iostream>
using namespace std;

// function overriding in C++ (Run-time Polymorphism)

class Base
{
public:
    void show()
    {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base // Derived class inherits from Base class
{
public:
    void show()
    {
        cout << "Derived class show function called." << endl;
    }
};

int main()
{
    Base b;
    b.show(); // Calls Base class show
    Derived d;
    d.show(); // Calls Derived class show
    return 0;
}

// In this example, the 'show' function is overridden in the Derived class. When we call 'show' on an object of the Derived class, it invokes the overridden function in the Derived class, demonstrating function overriding in C++.
// Note: To achieve true run-time polymorphism with function overriding, we would typically use virtual functions. However, this example focuses on the basic concept of function overriding without virtual functions for simplicity.