//Write a C program that:
//Creates an integer variable named age.
//Asks the user to enter their age.
//Stores the input in age.
//Displays the age.

#include <stdio.h>
int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    printf("Your age is %i", age);
    return 0;
}
