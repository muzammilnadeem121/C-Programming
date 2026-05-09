#include <stdio.h>
#include <string.h>

int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("CALCULATOR\n");
    printf("----------\n");

    printf("Please Enter 1st Value: ");
    scanf("%lf", &num1);

    printf("Please Enter an Operator (+, - *, /): ");
    scanf(" %c", &operator);

    printf("Please Enter 2nd Value: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Please enter a valid Operator!");
        return 1;
    }

    printf("Result: %.2lf", result);

    return 0;
}