#include <iostream>
using namespace std;

class Teacher
{
private:
    double sal;

public:
    // data member/properties/attributes
    string name;
    string dept;
    int id;
    // double sal;

    // member function
    void changeDept(string d)
    {
        dept = d;
    }

    // setter
    void setSal(double s)
    {
        sal = s;
    }

    // getter
    double getSal()
    {
        return sal;
    }

    // constructor //Non-parameterized constructor
    Teacher()
    {
        cout << "Constructor called. Object created." << endl;
    }
    // A constructor is a special member function that is automatically called when an object of the class is created. It has the same name as the class and does not have a return type.
    // Constructors are used to initialize objects and allocate resources if needed.
    // If no constructor is defined, the compiler provides a default constructor that initializes members with default values.
    // Here, we have defined a constructor that prints a message when an object is created and initializes the dept attribute to "Not Assigned".
    // memory allocation happens when object is created and constructor is called at that time
    // constructor can called only once for an object
};

int main()
{
    Teacher t1; // When this object is created, the constructor is called automatically.
    t1.name = "John Doe";
    // t1.dept = "Mathematics";
    t1.id = 101;
    t1.setSal(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "ID: " << t1.id << endl;
    cout << "Salary: " << t1.getSal() << endl;

    return 0;
}