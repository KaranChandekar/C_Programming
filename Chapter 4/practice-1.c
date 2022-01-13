// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("*** Multiplication tabel of %d ***\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
    }
    
    return 0;
}