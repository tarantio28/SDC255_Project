#include <stdio.h>
#include "calculateTwo.h"

void secondCalculation() {
    int a, b, result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    result = a * b;
    printf("Second Calculation is: %d * %d = %d\n", a, b, result);
}
