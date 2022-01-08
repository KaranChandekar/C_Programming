#include <stdio.h>
#include <math.h>

int main() {
    int a = 14;
    int b = 7;
    int z;

    // arithmetic instructions
    printf("The sum of a and b is %d \n", a + b);
    printf("The subtraction of a and b is %d \n", a - b);
    printf("The multiplication of a and b is %d \n", a * b);
    printf("The dividation of a and b is %d \n", a / b);
    
    z = a * b;  // allowed
    // a + b = z;  // not allowed
    printf("The value of z is %d \n", z);

    printf("When 5 divided by 2, the remainder is %d \n", 5 % 2);
    printf("When 5 divided by -2, the remainder is %d \n", 5 % -2);
    printf("When -5 divided by 2, the remainder is %d \n", -5 % 2);

    // No operator is assumed to be present 
    // printf("The value of 4 * 5 is %d \n", 4 . 5) // This will show error
    // printf("The value of 4 * 5 is %d \n", (4) (5)) // This will show error
    printf("The value of 4 * 5 is %d \n", (4) * (5)); // This is correct
    printf("The value of 4 * 5 is %d \n", 4 * 5); // This is correct

    // There is no operator to perform exponentiation in C
    printf("The value of 4 ^ 5 is %d \n", 4 ^ 5);   // Will not produce 4 ^ 5

    printf("The value of 4 to the power 5 is %f \n", pow(4, 5));    // this will produce 4 ^ 5, need to add math.h, need to write %f because it returns a double value

    return 0;
}