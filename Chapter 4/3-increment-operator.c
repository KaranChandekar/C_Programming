#include <stdio.h>

int main() {
    int i = 5;

    printf("The value after i++ is %d \n", i++);
    i++;    // ---> first print then increment
    ++i;    // ---> first increment then print
    printf("The value after i is %d \n", i++);
    
    return 0;
}