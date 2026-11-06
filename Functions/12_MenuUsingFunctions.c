/*
EXERCISE 12: Menu Using Functions

Task:
Create a menu with several choices:
1. Addition
2. Subtraction
3. Multiplication
4. Exit

Use separate functions for the arithmetic operations.
Repeatedly show the menu until the user chooses to exit.

Requirements:
- Use a loop to keep displaying the menu.
- Use separate functions for addition, subtraction, and multiplication.
- Use a selection structure (switch or if/else).
- Ask for two numbers when an arithmetic operation is selected.
- Exit cleanly when the user chooses option 4.
- Handle invalid menu choices.

TODO:
1. Write the function prototypes.
2. Create a loop in main() for the menu.
3. Read the user's choice each time.
4. Use switch or if/else to call the appropriate function.
5. Define the three operation functions.
*/

#include <stdio.h>

/* TODO: Write the function prototypes here. */

int main(void)
{
    int choice;
    double first, second;

    do
    {
        printf("\\n===== MENU =====\\n");
        printf("1. Addition\\n");
        printf("2. Subtraction\\n");
        printf("3. Multiplication\\n");
        printf("4. Exit\\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        /* TODO: Use switch or if/else to process the choice.
           For choices 1-3, read two numbers and call the matching
           function. For choice 4, exit the loop. */

    } while (choice != 4);

    return 0;
}

/* TODO: Define the three operation functions here. */
