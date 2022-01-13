// Write a program to print frist n natural numbers using do-while loop

#include <stdio.h>

int main() {
    int i = 1, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= num);
    
    return 0;
}