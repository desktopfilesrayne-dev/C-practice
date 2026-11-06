/*
EXERCISE 09: Maximum of Three Function

Task:
Create a function that receives three integers and returns the
largest one. Ask for the three values in main(), call the function,
and display the result.

Requirements:
- The function receives three int parameters.
- The function returns an int.
- Consider equal values.

TODO:
1. Write the function prototype.
2. Read three integers in main().
3. Call the function and store its returned value.
4. Define the function using if/else statements.
*/

#include <stdio.h>

int larg(int, int, int);

int main(void)
{
    int first, second, third, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    largest=larg(first, second, third);
    printf("The largest number among the three is %d", largest);

    return 0;
}

int larg(int a, int b, int c){
    int largest;
    if(a>=b)
        largest=a;
    else
        largest=b;
    
    if(largest>=c)
        return largest;
    else 
        return c;
}
