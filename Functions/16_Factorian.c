#include <stdio.h>
int factorial(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i; 
    }
    return factorial;
}

void isFactorian(int n){
    int N, digit, sum=0;
    N=n;
    while(N>0){
        digit = N%10;
        sum+=factorial(digit);
        N/=10;}
    if(sum==n) printf("The number is a factorian.");
    else printf("The number is not a factorian.");
}

int main(){
    int n;
    printf("Enter a number N: ");
    scanf("%d", &n);
    isFactorian(n);
    return 0;
    }
