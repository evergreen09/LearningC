#include <stdio.h>

int main() {

    double num1;
    double num2;
    double result;
    const char plus = '+';
    const char minus = '-';
    const char multiply = '*';
    const char divide = '/';
    char operation;

    printf("Enter your first value: ");
    scanf("%lf", &num1);
    printf("Enter your second value: ");
    scanf("%lf", &num2);
    printf("Enter the operation that you want to perform: ");
    scanf(" %c", &operation);

    switch(operation) {
        case plus:
            result = num1 + num2;
            printf("Result: %f", result);
            break;
        case minus:
            result = num1 - num2;
            printf("Result: %f", result);
            break;
        case multiply:
            result = num1 * num2;
            printf("Result: %f", result);
            break;
        case divide:
            result = num1 / num2;
            printf("Result: %f", result);
            break;
        default:
            printf("Invalid Operation!");
    }

    return 0;
}