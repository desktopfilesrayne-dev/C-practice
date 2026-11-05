/*Ask the user to enter an integer. Use a loop to display 
its multiplication table from 1 to 10 in a clear format such as '5 x 1 = 5'.*/
#include <stdio.h>
int main(){
    int N, product;
    printf("Enter an integer: ");
    scanf("%d", &N);
    for (int i=0;++i<=10;){
        product=N*i;
        printf("\n%d", product);
    }
    return 0;
}
