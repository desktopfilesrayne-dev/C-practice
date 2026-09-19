// Write a C program that:
//
// 1. Creates two integer variables named a and b.
//
// 2. Asks the user to enter the first integer.
//
// 3. Asks the user to enter the second integer.
//
// 4. Calculates the following:
//    - Sum (a + b)
//    - Difference (a - b)
//    - Product (a * b)
//
// 5. Displays the sum, difference, and product.
//
// Example:
// First number: 10
// Second number: 4
//
// Sum: 14
// Difference: 6
// Product: 40

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number (a): ");
    scanf("%i", &a);
    printf("Enter the second number (b): ");
    scanf("%i", &b);
    int sum = a + b;
    int difference = a - b;
    int product = a*b;
    printf("First number = %i\n", a);
    printf("Second number = %i\n", b);
    printf("Sum = %i\n", sum );
    printf("Difference = %i\n", difference);
    printf("Product = %i\n", product);
    return 0;
}