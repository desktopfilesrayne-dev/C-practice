/*Create a recursive function Power ( int, int ) that computes a where
the base a and power b are positive integer inputs.*/
#include<stdio.h>
int Power(int a, int b){
    if (b==0)
        return 1;
    else
        return a*Power(a,b-1);
}
int main(){
    int a, b;
    printf("Enter the base number: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);
    if(b<0)
        printf("Please enter a positive exponent");
    else{printf("%d raise to %d is %d\n", a, b, Power(a,b));}
    return 0;
}