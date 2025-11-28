#include <iostream>
using namespace std;

// Polymorphism : example of constructor Overloading

class Student
{
public:
    string name;

    // Constructor Overloading
    Student()
    {
        cout << "Non-Parametrised Constructor called" << endl;
    }

    Student(string name)
    {
        this->name = name;
        cout << "Parametrised Constructor called for " << name << endl;
    }
};

int main()
{
    // Object creation using Non-Parametrised Constructor
    Student s1;

    // Object creation using Parametrised Constructor
    Student s2("Alice");

    return 0;
}

// NOTES :

// 1. Polymorphism in C++ allows functions or methods to behave differently based on the context.
// 2. Constructor Overloading is a type of polymorphism where multiple constructors with different parameters are defined in the same class.
// 3. In this example, the Student class has two constructors: one without parameters and another that takes a string parameter.
// 4. When an object of the Student class is created, the appropriate constructor is called based on the arguments provided during object creation.

// POLYMORPHISM ARE OF TWO TYPES:
// 1. Compile Time Polymorphism (or Static Polymorphism) : Achieved using
//    a) Function Overloading
//    b) Operator Overloading
// 2. Run Time Polymorphism (or Dynamic Polymorphism) : Achieved using
//    a) Inheritance and Virtual Functions
//    b) Abstract Classes
//    c) Interfaces
// 5. Constructor Overloading is an example of Compile Time Polymorphism.
// 6. In this example, when we create the object s1, the non-parametrised constructor is called.
// 7. When we create the object s2 with a name parameter, the parametrised constructor is called.
