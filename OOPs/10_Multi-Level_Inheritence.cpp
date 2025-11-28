#include <iostream>
using namespace std;
// Multi-Level Inheritance
class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int roll;
};

class GradStudent : public Student
{
public:
    string researchArea;
};

int main()
{
    GradStudent gs;
    gs.name = "Alice";
    gs.age = 24;
    gs.roll = 101;
    gs.researchArea = "Machine Learning";

    cout << "Name: " << gs.name << endl;
    cout << "Age: " << gs.age << endl;
    cout << "Roll: " << gs.roll << endl;
    cout << "Research Area: " << gs.researchArea << endl;

    return 0;
}

// NOTES :
//  1. In multi-level inheritance, a class is derived from a class which is also derived from another class.
//  2. In this example, 'Person' is the base class, 'Student' is derived from 'Person', and 'GradStudent' is derived from 'Student'.
//  3. The 'GradStudent' class inherits properties from both 'Student' and 'Person' classes.
