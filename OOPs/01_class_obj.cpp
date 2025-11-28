#include <iostream>
using namespace std;

class Teacher
{
private:
    double sal;

public:
    // data member/properties/attributes
    string name;
    string dept;
    int id;
    // double sal;

    // member function
    void changeDept(string d)
    {
        dept = d;
    }

    // setter
    void setSal(double s)
    {
        sal = s;
    }

    // getter
    double getSal()
    {
        return sal;
    }

    // Here we have implemented encapsulation by binding the properties and functions together in a single unit called class.
    // Encapsulation is one of the four fundamental OOP concepts. The other three are inheritance, polymorphism, and abstraction.
    // Encapsulation helps in data hiding. By making the salary property private, we prevent direct access to it from outside the class.

    // Data hiding example :
    class Account
    {
    private:
        double balance;
        string password;

    public:
        string AccountId;
        string username;

        void setBalance(double b)
        {
            balance = b;
        }
        double getBalance()
        {
            return balance;
        }
    };
};

// Here in Account class, balance and password are private members and cannot be accessed directly from outside the class.
// We can only access and modify them through the public member functions setBalance and getBalance.
// This ensures that the sensitive data is protected and can only be changed in a controlled manner.

int main()
{
    Teacher t1;
    t1.name = "john";
    t1.dept = "MCA";
    t1.id = 101;
    t1.setSal(95000);
    cout << t1.getSal() << endl;
    t1.changeDept("B.tech");
    cout << t1.dept;
}
