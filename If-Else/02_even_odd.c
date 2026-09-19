// Write a C program that:
//
// 1. Creates an integer variable named number.
//
// 2. Asks the user to enter an integer.
//
// 3. Determines whether the number is even or odd.
//
// 4. If the number is even, display:
//    "The number is even."
//
// 5. If the number is odd, display:
//    "The number is odd."
//
// Example:
//
// Enter a number: 8
// The number is even.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);
    if (number%2 == 0)
    {
        printf("%d is an even number", number);
    }
    else 
    {
        printf("%d is an odd number", number);
    }
    return 0;
}