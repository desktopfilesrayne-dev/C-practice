// Write a C program that:
//
// 1. Creates t wo integer variables named a and b.
//
// 2. Asks the user to enter values for a and b.
//
// 3. Calculates the quotient of a divided by b
//    using integer division.
//
// 4. Displays the quotient.
//
// 5. Converts the value of a to a float using
//    typecasting before dividing it by b.
//
// 6. Displays the quotient as a decimal with
//    2 decimal places.
//
// Example:
//
// Enter a: 7
// Enter b: 2
//
// Integer quotient: 3
// Decimal quotient: 3.50

#include <stdio.h>
int main()
{
    //Declares variables as integer and float
    int a, b, q;
    float quo;

    //asks the user for the first number
    printf("Enter a: ");
    scanf("%d", &a);
    //Askss the user for the second number
    printf("Enter b: ");
    scanf("%d", &b);

    //
    if (b==0){
        printf("Error: Division by zero is not allowed.");
    }
    else {
        q = a / b;
        printf("The integer quotient is %d.\n", q);
        quo = (float)a / b;
        printf("The float quotient is %.2f. \n", quo);
    }

    return 0;
}