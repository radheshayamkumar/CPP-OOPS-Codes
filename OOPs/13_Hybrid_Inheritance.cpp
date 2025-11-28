#include <iostream>
using namespace std;

// Hybrid Inheritance in C++
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
class TeachingAssistant : public Student, public Teacher
{
};

int main()
{
    TeachingAssistant ta;
    ta.name = "Bob"; // Ambiguity here // Which 'name'? // Student's or Teacher's?
    ta.age = 22;     // Ambiguity here // Which 'age'? // Student's or Teacher's?
    ta.roll = 202;   // From Student class
    ta.subject = "Mathematics";

    cout << "Name: " << ta.name << endl;
    // To resolve ambiguity, we need to specify which 'age' we are referring to
    cout << "Age (from Student): " << static_cast<Student &>(ta).age << endl;
    cout << "Roll: " << ta.roll << endl;
    cout << "Subject: " << ta.subject << endl;

    return 0;
}

// NOTES :
// 1. Hybrid inheritance is a combination of two or more types of inheritance.
// 2. In this example, 'TeachingAssistant' inherits from both 'Student' and 'Teacher', while both 'Student' and 'Teacher' inherit from 'Person'.
// 3. This can lead to ambiguity when accessing members of the base class 'Person' through 'TeachingAssistant', as there are two copies of 'Person' in 'TeachingAssistant'.
// 4. To resolve ambiguity, we can use scope resolution or type casting to specify which base class member we want to access.
