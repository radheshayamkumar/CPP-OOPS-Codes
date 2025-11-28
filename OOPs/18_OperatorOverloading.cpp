#include <iostream>
using namespace std;

// Operator Overloading
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

main()
{

    // Built-in data types
    //  int a,b ,c;
    //  c= a+b;
    //  float x,y,z;
    //  z= x+y;

    data t1(10), result(0);
    result = ++t1; // we are trying to add 1 to object t1
    // This will give error as + operator is not defined for user-defined data types

    // THIS WORKS :
    int t2 = 10, sum;
    sum = ++t2; // works fine as + operator is defined for built-in data types
}