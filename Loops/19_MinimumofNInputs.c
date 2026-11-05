/*Ask the user how many numbers they will enter. 
Read those numbers using a loop and keep track of the smallest value. 
Display the minimum value after all inputs have been processed.*/
#include <stdio.h>
int main(){
    int N, min, n;
    printf("How many number would you like to enter?: ");
    scanf("%d", &N);
    if(N>0){
        printf("Enter a number: ");
        scanf("%d", &n);
        min=n;
    for(int i=1;i<=N-1;i++){
        printf("Enter a number: ");
        scanf("%d", &n);
            if(n<min){min=n;}
    }
    printf("The minimum number is %d\n", min);
}
    else{printf("not enough numbers\n");}
    return 0;
}
