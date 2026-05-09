#include <stdio.h>

int main(){

    int choice = 0;
    float celsius = 0.0;
    float fahrenheit = 0.0;

    printf("Temperature Converter Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = ( celsius * 9/5 ) + 32;
        printf("%.2fC in Fahrenheit is %.2fF", celsius, fahrenheit);
    } else if (choice == 2)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = ( fahrenheit - 32 ) * 5/9;
        printf("%.2fF in Celsius is %.2fC", fahrenheit, celsius);
    } else {
        printf("Invalid Choice!");
    }

    return 0;
}