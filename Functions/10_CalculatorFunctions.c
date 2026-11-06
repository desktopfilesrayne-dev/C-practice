/*
EXERCISE 10: Calculator Functions

Task:
Create separate functions for:
- addition
- subtraction
- multiplication
- division

Ask the user for two numbers and an operation, then call the
appropriate function and display the result.

Requirements:
- Each operation should have its own function.
- Decide whether to use int or double parameters and return types.
- Prevent division by zero.
- Handle an invalid operation choice.

TODO:
1. Write four function prototypes.
2. Read two numbers and an operation in main().
3. Use if/else or switch to select the correct function.
4. Define each operation function.
*/

#include <stdio.h>

/* TODO: Write the four function prototypes here. */

int main(void)
{
    double first, second, result;
    char operation;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    /* TODO: Use switch or if/else to call the correct function.
       Remember to check for division by zero. */

    return 0;
}

/* TODO: Define the four operation functions here. */
