// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int gcdEuclids(int m, int n){
    return m%n;
}
int main() {
    int m, n, R=0;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    do{
        R=gcdEuclids(m,n);
        m=n;
        n=R;
    }while(R!=0);
    printf("%d", m);
    return 0;
}

