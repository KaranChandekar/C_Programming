// Write a program to calculate the sum of the numbers occuring in the multiplication table of 8. (consider 8 x 1 and 8 x 10).

#include <stdio.h>

int main() {
    int sum;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("The sum of the numbers occuring in the multiplication tabel of 8 is %d.", sum);
    
    return 0;
}