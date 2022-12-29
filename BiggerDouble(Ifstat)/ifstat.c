#include <stdio.h>

int main(void) 
{
    double num1;
    double num2;

    printf("Type in the first number: ");
    scanf("%lf", &num1);
    printf("Type in the second number: ");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("%f is bigger than %f", num1, num2);
    } else if (num1 < num2) {
        printf("%f is bigger than %f", num2, num1);
    } else {
        printf("Both %f and %f are equal", num1, num2);
    }
}