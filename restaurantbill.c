/*
Create main 
Declare float variables
Generate meal price
Scanner objects to take the inputs (tax, tip)
Calculate tax, tip and total cost
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    float meal;
    float tax;
    float tip;
    float taxtotal;
    float tiptotal;
    float taxRounded;
    float tipRounded;
    float total;
    float array[4] = {9.95, 4.55, 13.25, 22.35};
    printf("Enter tax percent: ");
    scanf("%f", &tax);
    printf("Enter tip percent: ");
    scanf("%f", &tip);
    srand(time(NULL));
    meal = array[(rand()% 4)];
    taxtotal = (tax/100)* meal;
    tiptotal = (tip/100)* meal;
    taxRounded = roundf(taxtotal *100) / 100;
    tipRounded = roundf(tiptotal* 100) / 100;
    printf("\nBill\n");
    printf("Cost: $%.2f\n", meal);
    printf("Tax: $%.2f\n", taxRounded);
    printf("Tip: $%.2f\n", tipRounded);
    printf("Total: $%.2f\n", meal + taxRounded + tipRounded);
    return 0;
}
