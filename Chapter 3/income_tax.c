// Calculate an income paid by an employee to the government as per the slabs mentioned below:
        // Icome Slab               Tax
        // 2.5L - 5.0L              5%
        // 5.0L - 10.0L             20%
        // Above 10.0L              30%                
// Note that there is no tax below 2.5L. Take icome amount as an input from the user.

#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("Enter you'r income: \n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax += 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax += 0.20 * (income - 500000);
    }
    else if (income > 1000000)
    {
        tax += 0.30 * (income - 1000000);
    }
    else 
    {
        tax == 0;
    }
    printf("You're income tax to be paid by 26th of this month is Rs %f", tax);
    
    return 0;
}