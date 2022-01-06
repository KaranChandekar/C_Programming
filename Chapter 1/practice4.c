// Write a program to calculate simple interest for a set of values representing principle, number of years and rate of interest.

#include <stdio.h>

int main() {
    int principle, rate, years;
    
    printf("Enter the principle\n");
    scanf("%d", &principle);

    printf("Enter the rateOfInterest\n");
    scanf("%d", &rate);

    printf("Enter the years\n");
    scanf("%d", &years);

    int simpleInterest = (principle * rate * years) / 100;
    printf("The value of simple interest is %d", simpleInterest);

    return 0;
}