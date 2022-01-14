// Repeat practice-7 using while loop.

#include <stdio.h>

int main() {
    int i = 1, num, fact = 1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    while (i <= num)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d.", num, fact);
    
    return 0;
}