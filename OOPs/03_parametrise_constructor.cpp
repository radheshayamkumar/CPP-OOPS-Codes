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

    // Parameterized constructor
    Teacher(string n, string d, int i, double s)
    {
        name = n;
        dept = d;
        id = i;
        sal = s;
        cout << "Parameterized Constructor called. Object created." << endl;
    }
    // A parameterized constructor allows us to initialize an object with specific values at the time of its creation.
    // This constructor takes four parameters to initialize the name, dept, id, and sal attributes of the Teacher class.
    // we can create multiple objects with different initial values using this constructor.
    // multiple constructors can be defined in a class with different parameter lists (constructor overloading)

    // display function to show details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << getSal() << endl;
    }
};

int main()
{
    // Creating an object of Teacher class using parameterized constructor
    Teacher t1("John Doe", "Mathematics", 101, 50000);

    // cout << "Name: " << t1.name << endl;
    // cout << "Department: " << t1.dept << endl;
    // cout << "ID: " << t1.id << endl;
    // cout << "Salary: " << t1.getSal() << endl;

    return 0;
}