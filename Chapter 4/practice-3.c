// Write a program to print sum of first ten natural numbers using while loop.

#include <stdio.h>

int main() {
    int i = 0, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d", num, sum);
    
    return 0;
}