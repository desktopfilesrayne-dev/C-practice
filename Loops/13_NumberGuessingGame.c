/*Store a secret integer in the program. 
Repeatedly ask the user to guess the number. 
Display 'Higher' when the guess is too low, 'Lower' when it is too high, and 'Correct' when the guess matches. 
Continue until the user guesses correctly.*/
#include <stdio.h>
int main(){
    int N=134, guess;
    printf("Guess the number: ");
    scanf("%d", &guess);
    while(guess!=N){
        if(guess<N){
            printf("Higher: ");
            scanf("%d", &guess);
        }
        else{
            printf("Lower: ");
            scanf("%d", &guess);
        }
    }
    printf("Correct");
    return 0;
}