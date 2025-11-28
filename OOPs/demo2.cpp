#include <iostream>
using namespace std;

class Teacher
{
public:
    double sal;
    string name;
    string dept;

    // constructor :
    Teacher(double sal, string name, string dept)
    {
        this->sal = sal;
        this->name = name;
        this->dept = dept;
    }

    Teacher(double s, string n)
    {
        sal = s;
        name = n;
    }

    Teacher(string n)
    {
        name = n;
    }

    ~Teacher()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Teacher t1(50000, "Alice", "Mca");
    Teacher t2(60000, " alex");
    Teacher t3("john");

    cout << t1.name << endl;
    cout << t1.dept << endl;
}