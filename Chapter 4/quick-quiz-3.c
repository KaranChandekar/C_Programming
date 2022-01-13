// Write a program to print n natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = num; i; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}