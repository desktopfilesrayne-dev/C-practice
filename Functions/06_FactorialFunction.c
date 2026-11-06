/*
EXERCISE 06: Factorial Function

Task:
Create a function that receives a non-negative integer N and
calculates N! using a loop. Return the factorial to main() and
display it.

Examples:
0! = 1
1! = 1
5! = 120

Requirements:
- The function receives one integer parameter.
- Use a loop inside the function.
- The function returns the calculated factorial.
- Consider what happens if the user enters a negative number.
- Use an appropriate data type and be aware that factorial values
  grow very quickly.

TODO:
1. Write the function prototype.
2. Read N in main().
3. Validate that N is non-negative.
4. Call the function and display the returned value.
5. Define the function using a loop.
*/

#include <stdio.h>

long long int fact(int);

int main(void)
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
  if (n<0) 
    printf("The number is negative.");
  else printf("The factorial is %lld", fact(n));


    return 0;
}

long long fact (int n){
  long long factorial =1;
  for(int i=1;i<=n;i++){
    factorial*=i;
  }
  return factorial;
}
