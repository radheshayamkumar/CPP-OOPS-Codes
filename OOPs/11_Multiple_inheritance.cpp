#include <iostream>
using namespace std;

// Multiple Inheritance in C++
class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TeachingAssistant : public Student, public Teacher
{
};

int main()
{
    TeachingAssistant ta;

    ta.name = "Bob";
    ta.roll = 202;
    ta.subject = "Mathematics";
    ta.salary = 1500.50;

    cout << ta.name << endl;
    cout << ta.roll << endl;
    cout << ta.subject << endl;
    cout << ta.salary << endl;

    return 0;
}

// NOTES :
// 1. Multiple inheritance allows a class to inherit from more than one base class.
// 2. In this example, the 'TeachingAssistant' class inherits from both 'Student' and 'Teacher' classes.
// 3. The 'TeachingAssistant' class can access members from both parent classes directly.
