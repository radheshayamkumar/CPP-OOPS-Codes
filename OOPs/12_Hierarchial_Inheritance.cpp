#include <iostream>
using namespace std;

// Hierarchical Inheritance in C++

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

class Teacher : public Person
{
public:
    string subject;
};

int main()
{
    Student student;
    student.name = "Alice";
    student.age = 20;
    student.roll = 101;

    Teacher teacher;
    teacher.name = "Mr. Smith";
    teacher.age = 40;
    teacher.subject = "Mathematics";

    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << endl;
    cout << "Student Roll: " << student.roll << endl;

    cout << "Teacher Name: " << teacher.name << endl;
    cout << "Teacher Age: " << teacher.age << endl;
    cout << "Teacher Subject: " << teacher.subject << endl;

    return 0;
}

// NOTES :
// 1. Hierarchical inheritance is a type of inheritance where multiple derived classes inherit from a single base class.
// 2. In this example, both 'Student' and 'Teacher' classes inherit from the 'Person' class.
// 3. Both derived classes can access the public members of the base class directly.
// 4. This allows for code reusability and a clear hierarchical structure in the class design.
