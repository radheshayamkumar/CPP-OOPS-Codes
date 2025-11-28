#include <iostream>
using namespace std;

class Box
{
private:
    int length = 10;

    // Declaring global function as friend
    friend void show(Box); // Friend function declaration , box is passed by value
};

// Friend function definition
void show(Box b) // Function to access private members of class Box
{
    cout << "Length is: " << b.length << endl;
}

int main()
{
    Box b1;
    show(b1); // Allowed to access private member
    return 0;
}
// In this example, the global function 'show' is declared as a friend of the class 'Box'. This allows the 'show' function to access the private member 'length' of the 'Box' class. Without the friend declaration, the 'show' function would not be able to access the private member of the class.

// Friend functions are useful when a function needs to access private members of a class but is not a member of that class. However, they should be used judiciously, as they can break encapsulation and lead to tightly coupled code.
