#!/usr/bin/env python3
# Demonstrating Python's Features

# Functions and Dynamic Typing
def add(a, b):
    return a + b

# Object-Oriented Programming
class Shape:
    def area(self):
        raise NotImplementedError("Subclass must implement abstract method")

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * self.radius ** 2

# List Comprehensions
squares = [x ** 2 for x in range(10)]

# Exception Handling
try:
    result = 10 / 0
except ZeroDivisionError as e:
    result = "Infinity"
    print(f"Exception Handling: {e}")

# Lambda Functions
multiply = lambda x, y: x * y

# Generators
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

# File Handling
with open("example.txt", "w") as file:
    file.write("Python File Handling Example\n")

# Importing Modules
import math
import os

# Decorators
def greet_decorator(func):
    def wrapper(name):
        print("Hello,", end=" ")
        func(name)
    return wrapper

@greet_decorator
def greet(name):
    print(name)

# List, Tuple, Set, and Dictionary
sample_list = [1, 2, 3]
sample_tuple = (1, 2, 3)
sample_set = {1, 2, 3}
sample_dict = {"a": 1, "b": 2, "c": 3}

# Multi-threading
import threading

def print_numbers():
    for i in range(5):
        print(i, end=" ")

thread = threading.Thread(target=print_numbers)

# Demonstration of Features
if __name__ == "__main__":
    print("Welcome to Python Features Demonstration!")

    # Function Usage
    print("Function Example: Sum =", add(10, 20))

    # OOP Example
    circle = Circle(5)
    print("OOP Example: Area of Circle =", circle.area())

    # List Comprehension
    print("List Comprehension Example: Squares =", squares)

    # Exception Handling
    print("Division Result:", result)

    # Lambda Function
    print("Lambda Example: Product =", multiply(10, 20))

    # Generators
    print("Generator Example: Fibonacci Sequence =", list(fibonacci(5)))

    # File Handling
    if os.path.exists("example.txt"):
        print("File Handling Example: File created successfully!")

    # Math Module
    print("Math Module Example: Square Root of 16 =", math.sqrt(16))

    # Decorator
    greet("Python Enthusiast")

    # Data Structures
    print("Data Structures Example:")
    print("List:", sample_list)
    print("Tuple:", sample_tuple)
    print("Set:", sample_set)
    print("Dictionary:", sample_dict)

    # Multi-threading
    print("Multi-threading Example: Numbers = ", end="")
    thread.start()
    thread.join()

