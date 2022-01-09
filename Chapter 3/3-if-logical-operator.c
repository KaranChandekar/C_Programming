#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    int vipPass = 0;
    vipPass = 1;

    if ((age >= 18 && age <= 70 || vipPass == 1))
    {
        printf("You can drive! \n");
    }
    else
    {
        printf("You cannot drive! \n");
    }

    if (age == 50)
    {
        printf("Half century! \n");
    }
    
    return 0;
}