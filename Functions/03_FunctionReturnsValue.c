/*
EXERCISE 03: Function that Returns a Value

Task:
Create a function that receives two integers and returns their sum.
Ask for two numbers in main(), call the function, store the returned
result, and display it.

Requirements:
- The function receives two int parameters.
- The function returns an int.

TODO:
1. Write the function prototype.
2. Read two integers in main().
3. Call the function and store its return value.
4. Define the function. Use return to send the sum back to main().
*/

#include <stdio.h>

int sum(int, int);

int main(void)
{
    int first, second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("The sum is %d", sum(first, second));

    return 0;
}

int sum(int a, int b){
    return a+b;
}
