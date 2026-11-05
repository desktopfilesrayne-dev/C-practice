/*Ask the user for the number of rows. Use nested loops to print a simple pattern of stars, 
with the number of stars increasing on each row. Example for 4 rows: *, **, ***, **** */
#include <stdio.h>
int main(){
    int N;
    printf("Enter how many number of rows do you want: ");
    scanf("%d", &N);
    if(N>0){
        for(int i=1;i<=N;i++){
            for(int s=1;s<=i;s++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid number of rows\n");
    }
    return 0;
}
