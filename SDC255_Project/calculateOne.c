#include <stdio.h>
#include "calculateOne.h"

void firstCalculation() {
    int a, b, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    result = a + b;
    printf("First Calculation is: %d + %d = %d\n", a, b, result);
}
