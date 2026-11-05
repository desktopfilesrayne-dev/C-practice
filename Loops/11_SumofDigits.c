/*Ask the user to enter a positive integer. Use a loop to extract 
each digit and add all digits together. Display the digit sum.*/
#include <stdio.h>
int main(){

    int N, digit, sum=0;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N>0){
        while(N>0){
            digit=N%10;
            sum+=digit;
            N=N/10;
        }
        printf("The sum is %d", sum);
    }
    else{
    printf("You have entered an invalid number.");}
    
    return 0;
}