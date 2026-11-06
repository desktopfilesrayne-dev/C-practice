#include <stdio.h>
int Sum(int n){
    if (n==1)
        return 1;
    else{
        return n+Sum(n-1);
    }}
int main(){
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    printf("%d\n", Sum(n));
    return 0;
}