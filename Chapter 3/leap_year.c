// Write a progam to find whether a year entered by user is leap year or not

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("The year is leap year!");
    }
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("The year is leap year!");
    }
    else
    {
        printf("The year is not a leap year!");
    }
        
    return 0;
}