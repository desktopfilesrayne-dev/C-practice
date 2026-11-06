/*
EXERCISE 07: Prime Number Function

Task:
Create a function that receives an integer and determines whether
it is prime. Test divisibility using a loop and return or display
the result.

Remember:
- A prime number is an integer greater than 1 with exactly two
  positive factors: 1 and itself.
- 0, 1, and negative integers are not prime.

TODO:
1. Choose whether the function returns a true/false-style int
   (for example, 1 for prime and 0 for not prime) or displays the
   result itself.
2. Write the function prototype.
3. Read an integer in main() and call the function.
4. Define the function using a loop to test divisibility.
*/

#include <stdio.h>

void prime(int);

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    prime(number);

    return 0;
}

void prime(int n){
  if(n<=1){
    printf("The number is not prime");
    return;}
  int count =0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count+=1;
    }
  }
  if (count>2)
    printf("The number is not prime.");
  else
    printf("The number is prime");
}

