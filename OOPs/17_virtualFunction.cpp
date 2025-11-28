#include <iostream>
using namespace std;

// Virtual Functions in C++ (Run-time Polymorphism)

class Parent
{
public:
    virtual void display() // Virtual function
    {
        cout << "Display function from Parent class." << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Display function from Child class." << endl;
    }
};

int main()
{
    Child c1;
    c1.display(); // Calls Child class display
    return 0;
}

// In this example, the 'display' function in the Parent class is declared as a virtual function. When we call 'display' on an object of the Child class, it invokes the overridden function in the Child class, demonstrating run-time polymorphism using virtual functions in C++.

// Virtual functions are Dynemic in nature.
// Defined by the keyword 'virtual' in the base class and are alaways declared with a base class and overridden in the child class.

// A virtual Function is called during Runtime.