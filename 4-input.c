#include<stdio.h>

int main () {
    int a, b;
    printf("Enter first number \n");
    scanf("%d", &a);    //scanf is used to take an input from user

    printf("Enter second number \n");
    scanf("%d", &b);

    printf("Sum of given numbers is %d", a + b);
    return 0;
}