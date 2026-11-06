/*
EXERCISE 08: Sum of Digits Function

Task:
Create a function that receives a positive integer and returns
the sum of its digits. Use a loop inside the function.

Example:
Input: 472
Calculation: 4 + 7 + 2
Returned result: 13

Hints to think about:
- number % 10 gets the last digit.
- number / 10 removes the last digit when using integer division.

TODO:
1. Write the function prototype.
2. Read a positive integer in main().
3. Call the function and store its returned sum.
4. Define the function using a loop.
*/

#include <stdio.h>

int sumofdig(int);

int main(void)
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if(number<0)
        printf("Invalid input");
    else
    printf("The sum of the digits of the number is %d", sumofdig(number));

    return 0;
}

int sumofdig(int n){
    int digit, sum=0;
    do{
        digit = n%10;
        sum+=digit;
        n/=10;
    }while(n>0);
    return sum;
}
