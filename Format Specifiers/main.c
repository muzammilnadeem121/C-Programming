#include<stdio.h>

int main(){
    
    // flag - show if a number is positive or negative
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("======Int=======\n");
    printf("%+d\n", num1); // show + sign
    printf("%+d\n", num2); // show + sign
    printf("%+d\n", num3); // show - sign


    // precision - show specific number of digits after decimal point and round them off
    float price1 = 19.99;
    float price2 = 1.59;
    float price3 = 25.555;

    printf("=========Float==========\n");
    printf("%f\n", price1);     // prints 6 digits after decimal point
    printf("%.2f\n", price2);   // prints 2 digits ...
    printf("%.1f\n", price3);   // prints 1 digit after decimal point and round it


    // width - minimum chars to print
    int age1 = 1;
    int age2 = 10;
    int age3 = 100;

    printf("=======int=======\n");
    printf("%2d\n", age1); // print two chars 
    printf("%2d\n", age2);
    printf("%2d\n", age3); // still print 100 wont cut the value

    return 0;
}