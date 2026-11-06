/*
EXERCISE 05: Largest of Two Function

Task:
Create a function that receives two integers and returns the larger
value. Ask for two integers in main(), call the function, and display
the returned value.

Requirements:
- The function receives two int parameters.
- The function returns an int.
- Decide how your function should handle equal values.

TODO:
1. Write the function prototype.
2. Read two integers in main().
3. Call the function and store its returned value.
4. Define the function using if/else or the conditional operator.
*/

#include <stdio.h>

int larg (int, int);

int main(void)
{
    int first, second, largest;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    largest=larg(first,second);
   
    printf("The largest number among the two is %d", largest);
    

    return 0;
}

int larg(int a, int b){
    if(a<=b)
        return b;
    else
        return a;
}
