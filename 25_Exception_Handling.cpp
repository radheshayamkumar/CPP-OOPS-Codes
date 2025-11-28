#include <iostream>
using namespace std;

// exception handling in C++ using try, catch, and throw

int main()
{
    double bal = 1000.0;
    try
    {
        double amt;
        // deposit
        cout << "Enter Deposit amout" << endl;
        cin >> amt;
        if (amt <= 0)
        {
            // cout << "Invalid amount to deposit" << endl;
            throw invalid_argument("Invalid amount to deposit");
        }
        bal += amt;
        cout << "Balance after deposit: " << bal << endl;

        // withdraw
        cout << "Enter Withdraw amount" << endl;
        cin >> amt;
        if (amt > bal)
        {
            // cout << "Insufficient balance" << endl;
            throw runtime_error("Insufficient balance");
        }
        bal -= amt;
        cout << "Balance after withdraw: " << bal << endl;
    }
    catch (exception &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
}