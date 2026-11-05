#include <stdio.h>
int main(){
    int n=1, num, count, term=1, prev=0;
    printf("Input up to what term of fibonacci sequence you want to see: ");
    scanf("%d", &count);
    if(count==1){printf("0");}
    else if(count==2){printf("1");}
    else {
        printf("0\n1");
        count-=2;
        while (n++<=count)
        {
            num=term+prev;
            printf("\n%d", num);
            prev=term;
            term=num;
        }
    }
    return 0;
}
