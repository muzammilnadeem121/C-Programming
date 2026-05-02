#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // null terminator - used only in chars not strings
    char name[30] = "";

    printf("Enter your Age: ");
    scanf("%d", &age); // & is called address of and is used to write a value at the address of the variable

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your Grade: ");
    scanf(" %c", &grade); // leave a space before the format specifier to prevent inputting \n

    getchar();
    printf("Enter your Full Name: ");
    fgets(name, sizeof(name), stdin);   // use fgets() if the input can include whitespaces \
                                           use getchar() above to prevent inputting \n \
                                           the fgets() also gets the new line character at the end so make sure to remove it
    name[strlen(name) - 1] = '\0';      // set the last character of name to a null terminator

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.1f\n", gpa);
    printf("%c\n", grade);

    return 0;
}