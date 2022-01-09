// Write a program to determine whether a number is divisble by 97 or not 

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);
    
    printf("Divisibility test returns: %d \n", num % 97);

    return 0;
}