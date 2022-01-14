// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main() {
    int num, fact = 1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d.", num, fact);
    
    return 0;
}