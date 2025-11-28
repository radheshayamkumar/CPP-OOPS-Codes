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
};

void main()
{
    data t1(10), t2(10), result(0);
    // Adding two objects t1 and t2
    result = t1 + t2; // This will give error as + operator is not defined for user-defined data types
}