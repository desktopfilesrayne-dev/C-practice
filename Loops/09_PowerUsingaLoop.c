/*Ask the user for a base and a non-negative integer exponent. 
Calculate base raised to the exponent using repeated multiplication 
in a loop. Do not use a built-in power function.*/
#include <stdio.h>
int main(){
    int base, exponent, power=1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    for(int i=0;++i<=exponent;){
        power*=base;
    }
    printf("%d", power);
    return 0;
}