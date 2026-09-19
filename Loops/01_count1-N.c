#include <stdio.h>
int main()
{
    int N;
    int i;
    printf("Enter a positive nnumber: ");
    scanf("%i", &N);
    if (N>0)
    {
        for (i=1; i<=N; i++)
        {
            printf("%i", i);
        }
    }
    else 
    {
        printf("Invalid input");
    }
    
    return 0;

}