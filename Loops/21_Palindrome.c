/*
Ask the user to enter a positive integer.
Use a loop to reverse the digits of the number.
Compare the reversed number with the original input.
Display whether the number is a palindrome or not.

Example:
Input: 121
Output: 121 is a palindrome.

Input: 1234
Output: 1234 is not a palindrome.
*/
#include <stdio.h>

int main(){
    int N, test, digit, reversed=0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if(N>0){
        test=N;
        while(test>0){
        digit=test%10;
        reversed=(reversed*10)+digit;
        test/=10;}
        if (reversed==N){printf("%d is a palindrome number.\n", N);}
        else{printf("%d is not a palindrome number.\n", N);}
        }
    else{
        printf("The integer is non-positive.");
    }
    return 0;
}