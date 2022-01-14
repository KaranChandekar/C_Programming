// Write a program to implement practice-3.c using do-while loop.

#include <stdio.h>

int main() {
    int i = 0, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        sum += i;
        i++;
    } while (i <= num);
    printf("The sum of first %d natural numbers is %d.", num, sum);
    
    return 0;
}