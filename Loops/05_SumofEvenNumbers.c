/*Ask the user to enter a positive integer N. 
Use a loop from 1 through N. Add only the even numbers and display their total.
*/
#include <stdio.h>
int main(){
    int N, sum=0;
    printf("Enter a number N: ");
    scanf("%d", &N);
    for(int i=0; ++i<=N;){
        if(i%2==0)
            sum=sum+i;
    }
    printf("The sum is %d.", sum);
    return 0;
}