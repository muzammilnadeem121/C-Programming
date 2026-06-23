#include <stdio.h>

typedef struct{
    char model[50];
    int year;
    float price;
} Car;

int main(){

    Car cars[] = {{ "Mustang", 2025,  90000}, { "Corvette", 2026, 68000 }, { "Challenger", 2024, 70000 }};

    int elements = sizeof(cars) / sizeof(cars[0]);
    
    for (size_t i = 0; i < elements; i++)
    {
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%.2f\n\n", cars[i].price);
    }
    

    return 0;
}