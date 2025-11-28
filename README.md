🚀 C++ OOPs Notes (Beginner-Friendly + Examples)

Welcome to the C++ Object-Oriented Programming (OOP) notes!
This README explains all major concepts in simple language with clear examples.

📚 Table of Contents

📘 1. Class

🧍 2. Object

🏗️ 3. Constructor

🧹 4. Destructor

🔐 5. Access Modifiers

🧬 6. Inheritance

🌳 Types of Inheritance

🎭 7. Polymorphism

⚡ Compile-Time Polymorphism

🔥 Run-Time Polymorphism

🎨 8. Abstraction

⚠️ 9. Exception Handling

📝 Summary Table

📘 1. Class

A class is a blueprint that contains data (variables) and behavior (functions).

✅ Example:
class Student {
public:
    string name;
    int age;

    void info() {
        cout << name << " " << age;
    }
};

🧍 2. Object

An object is an instance of a class.

✅ Example:
Student s1;
s1.name = "Radhe";
s1.age = 22;
s1.info();

🏗️ 3. Constructor

A constructor runs automatically when an object is created.

Same name as the class

No return type

✅ Example:
class Hello {
public:
    Hello() {
        cout << "Constructor called!";
    }
};

🧹 4. Destructor

A destructor destroys the object when its lifetime ends.

Name starts with ~

No parameters

Automatically called

✅ Example:
class Demo {
public:
    ~Demo() {
        cout << "Destructor called!";
    }
};

🔐 5. Access Modifiers
Modifier	Meaning
public	Accessible everywhere
private	Only inside class
protected	Class + derived classes
Example:
class Test {
private:
    int a;

public:
    int b;

protected:
    int c;
};

🧬 6. Inheritance

Allows one class to reuse properties of another class.

Syntax:
class Child : public Parent { };

🌳 Types of Inheritance
✔ 1. Single Inheritance
class A { };
class B : public A { };

✔ 2. Multiple Inheritance
class A { };
class B { };
class C : public A, public B { };

✔ 3. Multilevel Inheritance
class A { };
class B : public A { };
class C : public B { };

✔ 4. Hierarchical Inheritance
class A { };
class B : public A { };
class C : public A { };

✔ 5. Hybrid Inheritance

Combination of multiple types.

🎭 7. Polymorphism

Polymorphism = "many forms"
Same function name → different behaviors.

Types:

Compile-time

Run-time

⚡ Compile-Time Polymorphism
✔ A. Function Overloading

Same function name, different parameters.

class Print {
public:
    void show(int x) { cout << x; }
    void show(string s) { cout << s; }
};

✔ B. Operator Overloading
🔹 Unary Operator Overloading
class Number {
    int x;
public:
    Number(int a){ x = a; }

    void operator ++() { x++; }

    void show(){ cout << x; }
};

🔹 Binary Operator Overloading
class Add {
    int a;
public:
    Add(int x){ a = x; }

    Add operator + (Add obj) {
        return Add(a + obj.a);
    }
};

🔥 Run-Time Polymorphism
✔ A. Function Overriding

Same function in base + derived class.

class A {
public:
    void show() { cout << "Base"; }
};

class B : public A {
public:
    void show() { cout << "Derived"; }
};

✔ B. Virtual Function

Ensures function of derived class runs using base pointer.

class A {
public:
    virtual void show() { cout << "Base"; }
};

class B : public A {
public:
    void show() override { cout << "Derived"; }
};

A* ptr = new B();
ptr->show();  // Output: Derived

🎨 8. Abstraction

Hiding complex details and showing only necessary parts.

Using abstract class:
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle"; }
};

⚠️ 9. Exception Handling

Used to handle runtime errors.

Example:
try {
    int a = 10, b = 0;
    if(b == 0) throw "Cannot divide by zero!";
    cout << a / b;
}
catch(const char* msg) {
    cout << "Error: " << msg;
}

📝 Summary Table
Concept	Meaning
Class	Blueprint
Object	Instance of class
Constructor	Initializes objects
Destructor	Destroys objects
Access Modifiers	Control accessibility
Inheritance	Reuse features
Polymorphism	Many forms of functions
Overloading	Compile-time polymorphism
Overriding	Runtime polymorphism
Virtual Function	Dynamic binding
Abstraction	Hiding internal details
Exception Handling	Managing runtime errors
