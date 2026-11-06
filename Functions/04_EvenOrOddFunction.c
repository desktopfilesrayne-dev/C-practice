/*
EXERCISE 04: Even or Odd Function

Task:
Create a function that receives an integer and determines whether
it is even or odd. The function may display the answer or return a
result that main() can use.

Requirements:
- Use a function with one int parameter.
- Use the remainder operator (%) to test divisibility by 2.

TODO:
1. Choose whether your function will display the answer or return
   a result to main().
2. Write its prototype.
3. Read an integer in main().
4. Call the function.
*/

#include <stdio.h>

void evenodd(int);

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    evenodd(number);

    return 0;
}

void evenodd(int number){
    if (number%2==0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }}
