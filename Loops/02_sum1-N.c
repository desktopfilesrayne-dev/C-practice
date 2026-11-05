//Sum from 1 to N
/*
Ask the user to enter a positive integer N. Use a 
loop to calculate the sum of all integers from 1 
through N. Display the final sum. 
*/

#include <stdio.h>
int main(){
    int N, sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=0;++i<=N;){
        sum=sum+i;
    }
    printf("%d", sum);

    return 0;
}

