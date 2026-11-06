/*
EXERCISE 11: Fibonacci Function

Task:
Create a function that receives N and returns or displays the
requested Fibonacci term or sequence. Handle N = 1 and N = 2
correctly and use a loop where appropriate.

Use this sequence convention:
Term 1 = 0
Term 2 = 1
Term 3 = 1
Term 4 = 2
Term 5 = 3
...

Decide whether your function will:
A. return the Nth term, or
B. display the first N terms.

TODO:
1. Choose A or B and write the matching function prototype.
2. Read N in main().
3. Handle N = 1 and N = 2.
4. Use a loop for the remaining terms.
5. Call the function from main().
*/

#include <stdio.h>

void fibo(int);

int main(void)
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

   if (n<=0)printf("Invalid term");
   else{
        fibo(n);
   }

    return 0;
}

void fibo(int n){
    if (n==1) printf("0");
    else if (n==2) printf("1");
    else{
        int prev=0, curr=1, term;
        printf("0\n");
        printf("1\n");
        for(int i=1;i<=n-2;i++){
            term=curr+prev;
                printf("%d\n", term);
            prev=curr;
            curr=term;
        }
    }

}
