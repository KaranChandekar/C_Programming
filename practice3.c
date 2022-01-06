// Write a program to convert celcius (centrigrate) to fahreneit

#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    
    printf("Enter the celcius\n");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;
    printf("The fahreneit value of given celcius is %f", fahrenheit);
    return 0;
}