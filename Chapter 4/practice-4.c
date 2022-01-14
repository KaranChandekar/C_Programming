// Write a program to implement practice-3.c using for loop.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d.", num, sum);
    
    return 0;
}