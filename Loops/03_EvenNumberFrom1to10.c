/*Ask the user to enter a positive integer N. Use a loop to 
examine the numbers from 1 through N and display only the even numbers.
*/
#include <stdio.h>
int main(){
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if(N==0||N<0) 
        printf("The number you have entered is not valid");
    for(int i=0; ++i<=N;){
        if(i%2==0)
            printf("\n%d", i);
    }
    return 0;
}