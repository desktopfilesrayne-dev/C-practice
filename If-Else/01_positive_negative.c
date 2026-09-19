// Write a C program that:
//
// 1. Creates an integer variable named number.
//
// 2. Asks the user to enter an integer.
//
// 3. Determines whether the number is:
//    - Positive
//    - Negative
//    - Zero
//
// 4. If the number is greater than 0, display:
//    "The number is positive."
//
// 5. If the number is less than 0, display:
//    "The number is negative."
//
// 6. If the number is equal to 0, display:
//    "The number is zero."
//
// Example:
//
// Enter a number: -5
// The number is negative.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);
    if (number>0)
    {
        printf("%d is a positive number", number);
    }
    else if (number<0)
    {
        printf("%d is a negative number", number);
    }
    else
    {
        printf("%d is zero", number);
    }
    return 0;
}