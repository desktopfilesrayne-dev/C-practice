/*Ask the user to enter a positive integer. 
Use a loop to determine how many digits the number contains. 
Display the count.*/
#include <stdio.h>
int main(){
    int N, digit, count=0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if(N>0){
        while(N>0){
            digit=N%10;
            count+=1;
            N/=10;
        }
        printf("The number has %d digits\n", count);
    }
    else{
        printf("You have entered an invalid number\n");
    }
    return 0;
}
