#include <iostream>
using namespace std;

// Inheritance in C++
class Person
{
public:
    string name;
    int age;

    // PARENT :CONSTRUCTOR
    Person()
    {
        cout << "Base/Parent class constructor called" << endl;
    }
};

class Student : public Person
{
public:
    int studentID;

    // constructor
    Student()
    {
        cout << "Child class constructor called" << endl;
    }
};

int main()
{
    Student s1;
    s1.age = 21;
    s1.name = "John";
    s1.studentID = 1001;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.studentID << endl;

    return 0;
}

// NOTES :
// 1. Inheritance allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class).
// 2. In this example, the 'Student' class inherits from the 'Person' class using the 'public' access specifier.
// 3. The 'Student' class can access the public members of the 'Person' class directly.
// 4. The constructor of the base class 'Person' is called before the constructor of the derived class 'Student'.