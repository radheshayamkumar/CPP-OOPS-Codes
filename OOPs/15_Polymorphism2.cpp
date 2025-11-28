#include <iostream>
using namespace std;

// Compile-time Polymorphism (Function Overloading)

class Print
{
    void show(int x)
    {
        cout << "Integer: " << x << endl;
    }

    void show(char ch)
    {
        cout << "Character: " << ch << endl;
    }
};

int main()
{
    Print p;
    // p.show(5);      // Calls show(int)
    // p.show('A');    // Calls show(char)
    return 0;
}

// Note: The above calls to p.show() are commented out because the show methods are private. To test the function overloading, you can change the access specifier of the show methods to public.
