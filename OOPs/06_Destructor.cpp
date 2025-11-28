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
        cout << "Salary: " << sal << endl;
    }

    //Destructor
    ~Teacher()
    {
        cout << "Destructor called for Teacher: " << name << endl;
    }
        //Destructor is used to free up the resources allocated to an object when it is no longer needed.
        // It is automatically invoked when an object goes out of scope or is explicitly deleted.
        // It helps prevent memory leaks and ensures proper cleanup of resources.
};

int main()
{
    Teacher t1("Alice", "Mathematics", 101);
    t1.setSal(50000);
    t1.display();

    Teacher t2("Bob", "Physics", 102);
    t2.setSal(55000);
    t2.display();

    return 0;
}