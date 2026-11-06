
#include <stdio.h>
int fibo(int n){
    if (n==1)
        return 0;
    if(n==2)
        return 1;
    else{
        return fibo(n-1)+fibo(n-2);
    }}
int main(){
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}


