#include <iostream>
#include <cmath>
#include <vector>
#include <memory>
using namespace std;

// Class to demonstrate object-oriented programming
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function (Polymorphism)
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {} // Constructor
    double area() const override {  // Function overriding
        return M_PI * radius * radius;
    }
};

// Template function to demonstrate generic programming
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Namespace to demonstrate scope control
namespace DemoNamespace {
    void display() {
        cout << "Namespace Example: Inside DemoNamespace" << endl;
    }
}

// Operator overloading example
class Complex {
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Input/Output using streams
    cout << "Welcome to the C++ Programming Language Demonstration!" << endl;

    // Object-Oriented Programming: Encapsulation, Inheritance, and Polymorphism
    Circle c(5.0);
    cout << "OOP Example: Area of Circle with radius 5 = " << c.area() << endl;

    // Template (Generic Programming)
    cout << "Template Example: Sum of 10 and 20 = " << add(10, 20) << endl;
    cout << "Template Example: Sum of 3.5 and 2.5 = " << add(3.5, 2.5) << endl;

    // Namespace usage
    DemoNamespace::display();

    // STL: Vector
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "STL Vector Example: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Operator Overloading
    Complex num1(1.0, 2.0), num2(3.0, 4.0);
    Complex sum = num1 + num2;
    cout << "Operator Overloading Example: Sum of Complex Numbers = ";
    sum.display();

    // Exception Handling
    try {
        throw runtime_error("Example Exception");
    } catch (const exception &e) {
        cout << "Exception Handling Example: Caught exception - " << e.what() << endl;
    }

    // Dynamic Memory Management
    unique_ptr<int> ptr = make_unique<int>(42);
    cout << "Dynamic Memory Example: Value in unique_ptr = " << *ptr << endl;

    // Lambda Function
    auto square = [](int x) { return x * x; };
    cout << "Lambda Function Example: Square of 5 = " << square(5) << endl;

    return 0;
}

