#include <stdio.h>
int GCDEuc(int m, int n){
    int R=1;
    do{
        R=m%n;
        m=n;
        n=R;
    }while(R!=0);
    return m;    
}
int main(){
    int m, n;
    printf("Enter the first integer: ");
    scanf("%d", &m);
    printf("Enter the second integer: ");
    scanf("%d", &n);
    if(GCDEuc(m,n)==1){printf("%d and %d are relatively prime.", m, n);}
    else{printf("%d and %d are not relatively prime.", m, n);}
    return 0;
}