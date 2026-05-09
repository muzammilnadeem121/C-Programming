#include <stdio.h>

int main(){

    int choice = 0;
    float kg = 0.0;
    float pounds = 0.0;

    printf("Weight Converter\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter weight in Kilograms (Kg): ");
        scanf("%f", &kg);
        pounds = kg * 2.20462;
        printf("%.2fKg in Pounds are %.2flbs\n", kg, pounds);
    } else if (choice == 2)
    {
        printf("Enter weight in Pounds (lbs): ");
        scanf("%f", &pounds);
        kg = pounds / 2.20462;
        printf("%.2flbs in Kilograms are %.2fKg\n", pounds, kg);
    } else {
        printf("Please enter a valid choice!\n");
    }

    return 0;
}