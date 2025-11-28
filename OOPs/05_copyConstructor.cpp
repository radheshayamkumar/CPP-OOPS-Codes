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

    // Using 'this' keyword //parameterized constructor
    Teacher(string name, string dept, int id)
    {
        this->name = name; // 'this->name' refers to the class member, 'name' refers to the parameter
        this->dept = dept;
        this->id = id;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "ID: " << id << endl;
    }

    // we can create our own copy constructor but if we do not create one, the compiler provides a default copy constructor
    Teacher(Teacher &t)
    {
        name = t.name;
        dept = t.dept;
        id = t.id;
        sal = t.sal;
        cout << "Custom Copy Constructor called." << endl;
    }
};

int main()
{
    Teacher t1("Alice Smith", "Physics", 102);

    // Using copy constructor to create a new object t2 as a copy of t1
    Teacher t2 = t1; // Default Copy constructor is called here //shallow copy means same to same copy from one object to another
    cout << t2.name << endl;
    cout << t2.dept << endl;
    cout << t2.id << endl;

    cout << "Details of t2 (copied from t1):" << endl;
    t2.display();
    return 0;

    // Note: In the above code, we have defined a custom copy constructor that takes a reference to another Teacher object and copies its attributes to the new object. When we create t2 as a copy of t1, the copy constructor is invoked, and the details of t1 are copied to t2.

    // Shallow Copy vs Deep Copy:
    // Shallow Copy: The default copy constructor provided by the compiler performs a shallow copy, which means it copies the values of the member variables as they are. The problem arises in dynemic memory allocation scenarios, where both objects end up pointing to the same memory location. Changes made through one object can affect the other.
    // Deep Copy: A deep copy involves creating a new copy of all the dynamically allocated memory, ensuring that each object has its own separate copy. This prevents unintended side effects when one object is modified.

    // static memory allocation happens at compile time and memory is allocated on stack
    // dynamic memory allocation happens at runtime and memory is allocated on heap
}