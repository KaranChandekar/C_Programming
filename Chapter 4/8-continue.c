#include <stdio.h>

int main() {
    int skip;
    printf("Enter a number to skip: ");
    scanf("%d", &skip);
    
    for (int i = 0; i < 10; i++)
    {
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d \n", i);
        }
    }
    
    return 0;
}