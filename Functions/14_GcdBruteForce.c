#include<stdio.h>

int brute(int m, int n){
    return m%n;
}
int main(){
    int min, m, n, Rm, Rn, GCD=1;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    if (m<n){
        min=m;
    }
    else{min=n;}

    if(m>0&&n>0){
        for(int i = 1; i<=min; i++){
            Rm=brute(m,i);
            Rn=brute(n,i);
            if (Rm==0&&Rn==0){
                GCD=i;
            }}
        printf("%d\n", GCD);
        }
        
    else if (n<0||m<0){printf("Invalid Input\n");}

    else{
        if(n==0&&m==0){printf("Indeterminate");}
        else{
            if (m>n){
                printf("%d\n", m);}
            else{printf("%d\n", n);}}}

    return 0;
}