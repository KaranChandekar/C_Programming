// C program to check a number is even or odd

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even", num);
    } else
    {
        printf("%d is odd", num);
    }
    
    return 0;
}