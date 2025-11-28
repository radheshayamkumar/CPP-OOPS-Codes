#include <iostream>
using namespace std;

class data
{
public:
    int num1;
    data(int n)
    {
        num1 = n;
    }

    data operator-(data t2) // 2nd operand is passed as an argument
    {
        data t3(0);               // creating a temporary object to hold the result
        t3.num1 = num1 - t2.num1; // adding num1 of current object with num1 of t2 object
        return t3;
    }

    void display()
    {
        cout << "Value: " << num1 << endl;
    }
};

int main()
{
    data t1(10), t2(20), result(0);
    result = t1 - t2; // Now this works fine as we have overloaded + operator
    result.display();
    return 0;
}

// if we want to overload - operator, we can do it like this:
/*
data operator-(data t2) // 2nd operand is passed as an argument
{
    data t3(0);
    t3.num1 = num1 - t2.num1; // subtracting num1 of current object with num1 of t2 object
    return t3;
}
*/
// Similarly, we can overload *, /, % operators as per our requirement.
// Note: We cannot overload certain operators like ::, ., sizeof, ?: etc.
