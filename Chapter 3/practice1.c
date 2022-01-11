// Write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user.

#include <stdio.h>

int main() {
    int physics, chemistry, biology;

    printf("Enter marks in physics: \n");
    scanf("%d", &physics);

    printf("Enter marks in chemistry: \n");
    scanf("%d", &chemistry);

    printf("Enter marks in biology: \n");
    scanf("%d", &biology);
    
    float total = (physics + chemistry + biology) / 3;

    if (total < 40 || physics < 33 || chemistry < 33 || biology < 33)
    {
        printf("your total is %f, and you'r fail! \n", total);
    }
    else
    {
        printf("You'r total is %f, and you'r pass!  \n", total);
    }
    
    return 0;
}