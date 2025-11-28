

// the 'this' keyword is a pointer that points to the current object of the class. It is used to differentiate between class members and parameters when they have the same name.
//  It is particularly useful in constructors and setter methods to avoid naming conflicts.
//  In the constructor above, we use 'this->' to refer to the class members, ensuring that we are assigning the parameter values to the correct attributes of the object.
}
;

int main()
{
    // Creating an object of Teacher class using constructor with 'this' keyword
    Teacher t1("Alice Smith", "Physics", 102);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "ID: " << t1.id << endl;

    return 0;
}