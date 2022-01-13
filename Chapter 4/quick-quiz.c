// Write a program to print natural numbers from 10 to 20. when initial loop counter is initialized to 0.
// The loop counter need not to be int, it can be float as well!

#include <stdio.h>

int main() {
    int a = 10;

    while (a <= 20)
    {
        printf("%d \n", a);
        a++;
    }
    
    return 0;
}