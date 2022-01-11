// Write a program to find greatest of four numbers entered by user

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    
    printf("Enter any four numbers: \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("%d is greatest!", num1);
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("%d is greatest!", num2);
    }
    else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        printf("%d is greatest!", num3);
    }
    else
    {
        printf("%d is greatest!", num4);
    }
    
    return 0;
}