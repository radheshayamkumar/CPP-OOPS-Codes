#include <iostream>
using namespace std;

class X
{
private:
    int a = 5;

    // Declaring Y as a friend
    friend class Y;
};

class Y
{
public:
    void show(X obj) // Function to access private members of class X
    {
        cout << "Value of a: " << obj.a << endl;
    }
};

int main()
{
    X x1;        // Creating object of class X
    Y y1;        // Creating object of class Y
    y1.show(x1); // prints 5

    return 0;
}

// In this example, class Y is declared as a friend of class X. This allows class Y to access the private member 'a' of class X. The show function in class Y takes an object of class X as a parameter and prints the value of 'a'. Without the friend declaration, class Y would not be able to access the private member of class X.

// Friend classes are useful when two or more classes need to work closely together and share access to each other's private members. However, they should be used judiciously, as they can break encapsulation and lead to tightly coupled code.