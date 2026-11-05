/*Ask the user to enter a positive integer N. 
Use a loop from 1 through N and count how many 
numbers are divisible by 3. Display the count.*/
#include <stdio.h>
int main(){
    int N, count=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (int i=0;++i<=N;){
        if (i%3==0) count+=1;
    }
    printf("Thus, there are %d numbers that are divisible by 3 from 1 to %d\n", count, N);
    return 0;
}