#include <iostream>
using namespace std;

// Unary Operator Overloading using Friend Function
class Number
{
private:
    int x;

public:
    Number(int a)
    { // constructor
        x = a;
    }

    // unary operator with object passed by value
    friend Number operator-(Number obj);

    void show()
    {
        cout << x << endl;
    }
};

// defining unary operator // as a friend function
Number operator-(Number obj)
{
    return Number(-obj.x);
}

int main()
{
    Number n(10), result(0);
    result = -n;   // using unary minus operator
    result.show(); // Output: -10
}

// In this example, we have defined a unary minus operator (-) for the class 'Number'. The operator is overloaded as a friend function that takes an object of the class by value and returns a new object with the negated value. When we use the unary minus operator on an object of the class, it invokes the overloaded operator function.

// Note: Unary operators operate on a single operand. In this case, the operand is an object of the class 'Number'.