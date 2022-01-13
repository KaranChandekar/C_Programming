// Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
    printf("***Multiplication table of 10*** \n");
    for (int i = 10; i > 0; i--)
    {
        printf("\t10 X %d = %d \n", i, 10 * i);
    }

    return 0;
}