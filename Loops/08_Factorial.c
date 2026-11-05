/*Ask the user to enter a non-negative integer N. 
Use a loop to calculate N! by multiplying the appropriate 
integers together. Display the factorial.*/
#include <stdio.h>
int main(){
    int N, factorial=1;
    printf("Enter a Number: ");
    scanf("%d", &N);
    for (int i = N+1; --i>=1;){
        factorial*=i;
    }
    printf("%d! is %d", N, factorial);
    return 0;
}