// Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>

int main() {
    // 97 - 122 = a - z     ASCII Values
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 97) && (ch <= 122))
    {
        printf("It's a lowercase!");
    }
    else
    {
        printf("It's not a lowercase!");
    }
    
    return 0;
}