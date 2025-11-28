# 🚀 C++ Object-Oriented Programming (OOPs) Concepts

Object-Oriented Programming (OOP) is a programming paradigm that uses the concept of **objects** and **classes**. It aims to implement real-world entities like inheritance, hiding, polymorphism, etc., in programming.

-----

## 🏗️ Core Concepts

### 1\. Class

A **Class** is a **user-defined blueprint or prototype** from which objects are created. It is a logical entity that does **not** consume any memory.

  * **Analogy:** A Class is like the blueprint for a house.
  * **Example:**

<!-- end list -->

```cpp
class Car {
    // Data members (attributes)
    string color;
    int year;
    // Member functions (methods)
public:
    void accelerate() {
        // ... code to accelerate ...
    }
};
```

### 2\. Object

An **Object** is a **runtime entity** of a class. It's an instance of a class and occupies memory. It represents a real-world entity.

  * **Analogy:** An Object is the actual house built from the blueprint.
  * **Example:**

<!-- end list -->

```cpp
Car myCar;      // 'myCar' is an object of the 'Car' class
Car yourCar;    // 'yourCar' is another object
```

### 3\. Constructor

A **Constructor** is a special member function that is **automatically called** when an object of a class is created. Its main purpose is to **initialize** the object's data members.

  * **Key Rules:**
      * It has the **same name** as the class.
      * It has **no return type** (not even `void`).
      * If you don't define one, the compiler provides a default constructor.
  * **Example (Default Constructor):**

<!-- end list -->

```cpp
class Dog {
    string name;
public:
    // Constructor
    Dog() {
        name = "Unknown";
    }
};
```

### 4\. Destructor

A **Destructor** is a special member function that is **automatically called** when an object is **destroyed** or goes out of scope. Its main purpose is to **clean up** resources (like dynamically allocated memory).

  * **Key Rules:**
      * It has the **same name** as the class, prefixed with a tilde ($\sim$).
      * It has **no return type** and takes **no arguments**.
      * A class can have **only one** destructor.
  * **Example:**

<!-- end list -->

```cpp
class Dog {
public:
    // Destructor
    ~Dog() {
        cout << "Dog object destroyed!" << endl;
    }
};
```

### 5\. Access Modifiers (Specifiers)

They define **how** the members (data and functions) of a class can be accessed.

| Modifier | Description | Accessible from... |
| :--- | :--- | :--- |
| **`public`** | Members are accessible from **outside** the class. | Everywhere |
| **`private`** | Members are accessible **only within** the class. | Only inside the class |
| **`protected`** | Members are accessible **within** the class and by its **derived classes** (children). | Inside class and derived classes |

  * **Example:**

<!-- end list -->

```cpp
class Account {
private:
    int balance; // Private: Cannot be accessed directly from outside
public:
    void deposit(int amount) { // Public: Can be called from outside
        balance += amount;
    }
};
```

-----

## 🧬 Inheritance

**Inheritance** is a mechanism where one class (the **derived/child class**) acquires the properties and behavior of another class (the **base/parent class**). It promotes **code reusability**.

  * **Example:**

<!-- end list -->

```cpp
// Base Class
class Animal {
public:
    void eat() { cout << "Animal is eating." << endl; }
};

// Derived Class
class Cat : public Animal { // Cat inherits from Animal
public:
    void meow() { cout << "Cat is meowing." << endl; }
};

// Usage
Cat c;
c.eat(); // Accessing the function from the base class
```

### Types of Inheritance

| Type | Description |
| :--- | :--- |
| **Single** | One class inherits from one base class. |
| **Multiple** | One class inherits from **more than one** base class. |
| **Multilevel** | A derived class becomes a base class for another class (e.g., A $\rightarrow$ B $\rightarrow$ C). |
| **Hierarchical** | Multiple derived classes inherit from a **single** base class. |
| **Hybrid** | A combination of two or more types of inheritance. |

-----

## 🎭 Polymorphism

**Polymorphism** means "many forms." In OOPs, it allows a single interface (like a function name or operator) to be used for a general class of actions.

### 1\. Compile-time Polymorphism (Static Polymorphism)

Achieved during **compile time**.

#### a) Function Overloading

Defining **multiple functions** in the **same scope** with the **same name** but with **different parameters** (either different number of arguments or different data types).

  * **Example:**

<!-- end list -->

```cpp
class Calculator {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; } // Overloaded function
};
```

#### b) Operator Overloading

Giving a special meaning to an existing C++ operator (like `+`, `-`, `*`, `++`, etc.) when applied to user-defined data types (objects).

  * **Unary Operator Overloading (e.g., `++`):** Operates on a single operand.

  * **Binary Operator Overloading (e.g., `+`):** Operates on two operands.

  * **Example (Binary Operator Overloading):**

<!-- end list -->

```cpp
class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}
    // Overloading the '+' operator
    Complex operator+(Complex const& obj) {
        Complex res(0, 0);
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
```

### 2\. Runtime Polymorphism (Dynamic Polymorphism)

Achieved during **runtime** using **Virtual Functions** and **Function Overriding**.

#### a) Function Overriding

Defining a function in the **derived class** that already exists in the **base class** with the **exact same signature** (name, return type, and parameters). This is enabled by **Inheritance**.

  * **Example:**

<!-- end list -->

```cpp
class Base {
public:
    void show() { cout << "Base class show" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class show" << endl; } // Overriding
};
```

#### b) Virtual Function

A function in the **base class** declared with the **`virtual`** keyword. When a function is made virtual, C++ decides which version of the function (base or derived) to call at **runtime** based on the object being pointed to, even if a base class pointer is used. This is the key to achieving Runtime Polymorphism.

  * **Example:**

<!-- end list -->

```cpp
class Base {
public:
    virtual void display() { cout << "Base display" << endl; }
};

class Derived : public Base {
public:
    void display() { cout << "Derived display" << endl; }
};
```

-----

## 🔒 Abstraction and Encapsulation

### 1\. Encapsulation

**Encapsulation** is the mechanism of **binding data (variables) and the code (methods) that operates on the data together** into a single unit (the class). It is often achieved by declaring data members as **`private`** and providing **`public`** getter/setter methods.

  * **Goal:** To protect the data from accidental external modification (data hiding).

### 2\. Abstraction

**Abstraction** means **showing only essential information** to the user and **hiding the background details**.

  * **Example:** When you drive a car, you use the steering wheel and pedals (the essential interface), but you don't need to know the complex internal mechanism of the engine (the hidden details).
  * **Implementation:** Can be achieved using **Abstract Classes** (classes with at least one **Pure Virtual Function**).

-----

## ⚠️ Exception Handling

**Exception Handling** is a mechanism that allows you to manage **runtime errors** (called exceptions) so the normal flow of the application can be maintained.

The basic mechanism uses three keywords:

  * **`try`**: The block of code that might throw an exception is placed inside the `try` block.

  * **`throw`**: An exception is explicitly thrown when an error occurs.

  * **`catch`**: The code that handles the exception is placed in the `catch` block.

  * **Example:**

<!-- end list -->

```cpp
double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!"; // Throwing an exception
    }
    return (a / b);
}

int main() {
    try {
        cout << division(50, 0) << endl;
    }
    catch (const char* msg) {
        cerr << "Error: " << msg << endl; // Catching and handling the exception
    }
    return 0;
}
```
