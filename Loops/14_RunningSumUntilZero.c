/*Repeatedly ask the user to enter an integer. 
Add each input to a running total. 
Stop when the user enters 0, then display the final sum.*/
#include <stdio.h>
int main(){
    int N, sum=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    while(N>0||N<0){
        sum+=N;
        printf("Enter a number: ");
        scanf("%d", &N);
    }
    printf("The sum of all the integers you have entered is %d\n",sum);
    return 0;
}
