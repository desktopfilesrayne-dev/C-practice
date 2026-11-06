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

void add();
void sub();
void mul();


int main(void)
{
    int choice;


    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Choose an option: \n");
        scanf("%d", &choice);

        if(choice>=1&&choice<4){
        switch(choice){
            case 1: 
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
        }}
        else if(choice==4)               
            break;
        else   
            printf("Invalid Opeartion,");
                

    } while (choice != 4);

    return 0;
}

void add(){
    int a, b;
        printf("----------ADDITION----------\n");
        printf("Enter the two numbers: \n");
        scanf("%d %d", &a, &b);
        printf("The sum is %d.\n", a+b);
        printf("_____________________________\n");
}
void sub(){
    int a, b;
        printf("----------SUBTRACTION----------\n");
        printf("Enter the two numbers: \n");
        scanf("%d %d", &a, &b);
        printf("The difference is %d.\n", a-b);
        printf("_____________________________\n");
}
void mul(){
    int a, b;
        printf("----------MULTIPLICATION----------\n");
        printf("Enter the two numbers: \n");
        scanf("%d %d", &a, &b);
        printf("The product is %d.\n", a*b);
        printf("_____________________________\n");
}
