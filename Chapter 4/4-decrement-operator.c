#include <stdio.h>

int main() {
    int i = 10;

    printf("The value after i-- is %d \n", i--);
    i--;    // ---> first print then decrement
    --i;    // ---> first decrement then print
    printf("The value after i is %d \n", i--);
    
    return 0;
}