#include <iostream>
using namespace std;

class Shape
{ // Abstract class
public:
    // Pure virtual function
    virtual void draw() = 0; // This makes Shape an abstract class
};

class Circle : public Shape
{ // Derived class
public:
    void draw()
    { // Implementing the pure virtual function
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    // Shape s; // Error: Cannot instantiate abstract class
    Circle c; // Creating an object of derived class
    c.draw(); // Calls the implemented draw function in Circle
    return 0;
}

// Abstraction in C++ using Abstract Classes and Pure Virtual Functions

// Abstraction is a fundamental concept in object-oriented programming that focuses on exposing only the essential features of an object while hiding the unnecessary details. In C++, abstraction can be achieved using abstract classes and pure virtual functions.

// Abstract class :  An abstract class is a class that cannot be instantiated on its own and is designed to be a base class for other classes. It contains at least one pure virtual function.

// eg. shape class has draw function, but we can create any obj from this, so a circle class and square class will inherit from shape and implement draw function.
