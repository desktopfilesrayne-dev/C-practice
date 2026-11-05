/*Ask the user to enter a positive integer N. 
Find all proper divisors of N, add them together, 
and determine whether their sum is equal to N. 
Display whether N is a perfect number.*/
#include <stdio.h>
int main() {
    int N, sum=0;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if(N>0){
        for(int i=0;++i<N;){

            if(N%i==0){
                sum+=i;
            }
        }
            if(sum==N){
                printf("%d is a perfect number\n", N);
            }
            else{
                printf("%d is not a perfect number\n", N);
            }
    }
    else{printf("You have entered an invalid number\n");}
    return 0;
}
