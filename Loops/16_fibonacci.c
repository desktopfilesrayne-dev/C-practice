#include <stdio.h>
int main(){
    int n=1, num, count, term=1, prev=0;
    printf("Input up to what term of fibonacci sequence you want to see: ");
    scanf("%d", &count);
    count-=2;
    while (n++<=count)
        {
            num=term+prev;
            printf("\n%d", num);
            prev=term;
            term=num;
        }
    return 0;
}
