#include <iostream>
using namespace std;

class data
{
public:
    int num1;

    // Constructor
    data(int n)
    {
        num1 = n;
    }

    // Overloading ++ operator (prefix)

    data operator++()
    {
        num1 = ++num1;
        return num1;
    }

    void display()
    {
        cout << "Value: " << num1 << endl;
    }
};

int main()
{

    data t1(10), result(0);
    result = ++t1; // Now this works fine as we have overloaded ++ operator
    result.display();
    return 0;
}