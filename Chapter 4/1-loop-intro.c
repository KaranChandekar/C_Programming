#include <stdio.h>

int main() {
    printf("Hello ");
    printf("World \n");
    int a = 1;
    // Loops are used to repeat similar part of a code snippet efficiently
    printf("%d \n", a);
    a++;
    printf("%d \n", a);
    a++;
    printf("%d \n", a);
    a++;
    printf("%d \n", a);
    a++;
    // and to print 100 numbers, we have to write same code 100 times, that's we don't want!
    return 0;
}