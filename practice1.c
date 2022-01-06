// make a C program to find the area of rectangle 

#include <stdio.h>

int main() {
    int length, breadth, area;

    printf("Enter the length of rectangle\n");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle\n");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("The area of given rectangle is %d", area);
    
    return 0;
}