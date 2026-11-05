/*Ask the user to enter a positive integer. Use a loop to extract its digits and construct 
the number in reverse order. Display the reversed number.*/
#include <stdio.h>
int main(){
    int N, digit, reversed=0;
    printf("Enter a number: ");
    scanf("%d", &N);
    if (N>0){
         while(N>0){
            digit=N%10;
            reversed=reversed*10+digit;
            N/=10;
         }
         printf("The reversed order of the integer is %d", reversed);
    }
    
    else{printf("You have entered an invalid number");
    }

   return 0;
}