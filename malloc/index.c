#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of Grades you want to add: ");
    scanf("%d", &number);

    char *grades = (char*)malloc(sizeof(char) * number);

    if (grades == NULL)
    {
        printf("Failed to Allocate Memory.\n");
        return 1;
    }

    for (size_t i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        
        scanf(" %c", &grades[i]);
    }

    for (size_t i = 0; i < number; i++)
    {
        printf("#%d: %c\n", i + 1, grades[i]);
    }

    free(grades);
    grades = NULL;

    return 0;
}