// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>

int main() {
    float pie = 3.14, area, volume; 
    int radius, height;
    
    printf("Enter the radius of a cylinder\n");
    scanf("%d", &radius);

    printf("Enter the height of a cylinder\n");
    scanf("%d", &height);

    volume = pie * radius * radius * height;
    printf("The volume of given cylinder is %f", volume);

    return 0;
}