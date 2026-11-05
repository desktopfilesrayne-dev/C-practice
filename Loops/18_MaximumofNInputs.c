/*Ask the user how many numbers they will enter.
 Read those numbers using a loop and keep track of the largest value. 
 Display the maximum value after all inputs have been processed.*/
#include <stdio.h>
int main(){
    int N, max, n;
    printf("How many number would you like to enter?: ");
    scanf("%d", &N);
    if(N>0){
        printf("Enter a number: ");
        scanf("%d", &n);
        max=n;
    for(int i=1;i<=N-1;i++){
        printf("Enter a number: ");
        scanf("%d", &n);
            if(n>max){max=n;}
    }
    printf("The maximum number is %d\n", max);
}
    else{printf("not enough numbers\n");}
    return 0;
}
