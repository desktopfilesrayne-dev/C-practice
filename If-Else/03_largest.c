// Write a C program that:
//
// 1. Creates two integer variables named a and b.
//
// 2. Asks the user to enter the first integer.
//
// 3. Asks the user to enter the second integer.
//
// 4. Determines which number is larger.
//
// 5. If a is greater than b, display:
//    "a is larger."
//
// 6. If b is greater than a, display:
//    "b is larger."
//
// 7. If they are equal, display:
//    "The numbers are equal."
//
// Example:
//
// Enter the first number: 15
// Enter the second number: 8
// 15 is larger.

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Enter the second number: ");
    scanf("%i", &b);

    if (a>b)
    {
        printf("%i is greater than %i", a, b);
    }
    else if (a<b)
    {
        printf("%i is less than %i", a, b);
    }
    else
    {
        printf("Both numbers are equal");
    }
    return 0;
}