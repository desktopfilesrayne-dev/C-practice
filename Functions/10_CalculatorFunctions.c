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

double sum(double,double);
double diff(double,double);
double prod(double,double);
double quo(double,double);

int main(void)
{
    double first, second;
    char operation;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    if(operation=='+')
        printf("The sum is %lf\n", sum(first, second));
    else if(operation=='-')
        printf("The difference is %lf\n", diff(first, second));
    else if(operation=='*')
        printf("The product is %lf\n", prod(first, second));
    else if(operation=='/'){
        if(second==0)
            printf("Undefined\n");
        else
        printf("The quotient is %lf\n", quo(first, second));
    }
    else  
        printf("Operation is invalid");

    return 0;
}

double sum(double a,double b) {return a+b;}
double diff(double a,double b) {return a-b;}
double prod(double a,double b) {return a*b;}
double quo(double a,double b) {return a/b;}