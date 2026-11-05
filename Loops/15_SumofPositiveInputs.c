/*Repeatedly ask the user to enter an integer. 
Add the number only when it is positive. Stop when the user enters a non-positive number, 
then display the sum of all positive inputs.*/
#include <stdio.h>
int main(){
    int N, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    while(N>0){
        sum+=N;
        printf("Enter a number: ");
        scanf("%d", &N);
    }
    printf("The sum of all the integers you have entered is %d\n",sum);
    return 0;
}