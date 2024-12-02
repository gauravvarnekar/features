#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Structure to represent a point
struct Point {
    int x;
    int y;
};

// Union to demonstrate memory sharing
union Data {
    int i;
    float f;
};

// Enumeration to represent colors
enum Color { RED, GREEN, BLUE };

int main() {
    printf("Welcome to the C Programming Language Demonstration!\n");

    // Demonstrating basic data types
    int a = 10, b = 20;
    float pi = 3.14;
    char c = 'C';
    printf("Basic Data Types: a = %d, b = %d, pi = %.2f, c = %c\n", a, b, pi, c);

    // Demonstrating arithmetic operator
    int sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Demonstrating pointers
    int *ptr = &a;
    printf("Pointer Example: Value of a using pointer = %d\n", *ptr);

    // Dynamic memory allocation
    int *dynamicArray = (int *)malloc(3 * sizeof(int));
    if (!dynamicArray) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    dynamicArray[0] = 1;
    dynamicArray[1] = 2;
    dynamicArray[2] = 3;
    printf("Dynamic Memory Allocation: [%d, %d, %d]\n", dynamicArray[0], dynamicArray[1], dynamicArray[2]);
    free(dynamicArray);

    // Demonstrating recursion
    int num = 5;
    printf("Recursion Example: Factorial of %d = %d\n", num, factorial(num));

    // Demonstrating structure usage
    struct Point p1 = {10, 20};
    printf("Structure Example: Point = (%d, %d)\n", p1.x, p1.y);

    // Demonstrating union usage
    union Data data;
    data.i = 42;
    printf("Union Example: Integer = %d\n", data.i);
    data.f = 3.14f;
    printf("Union Example: Float = %.2f\n", data.f);

    // Demonstrating enumeration usage
    enum Color favoriteColor = GREEN;
    printf("Enumeration Example: Favorite Color = %d\n", favoriteColor);

    // Math library usage
    double squareRoot = sqrt(16.0);
    printf("Math Library Example: Square root of 16 = %.2f\n", squareRoot);

    printf("This program demonstrates various features of C.\n");
    return 0;
}




