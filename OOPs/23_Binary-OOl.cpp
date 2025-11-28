#include <iostream>
using namespace std;

// Binary Operator Overloading using Friend Function
class Add
{
    int a;

public:
    Add(int x) // constructor
    {
        a = x;
    }

    // declaring friend function for operator overloading
    friend Add operator+(Add obj1, Add obj2);

    void show()
    {
        cout << a << endl;
    }
};

// Operator overloading with object arguments
Add operator+(Add obj1, Add obj2)
{
    return Add(obj1.a + obj2.a);
}

int main()
{
    Add A(10), B(20);

    Add C = A + B; // calls operator+
    C.show();      // Output: 30
}
