#include <stdio.h>
#include <string.h>

int main(){

    // char fruits[][10] = {"Apple", "Banana", "Mango", "Pineapple"};

    // int elements = sizeof(fruits) / sizeof(fruits[0]);

    // for (size_t i = 0; i < elements; i++)
    // {
    //     printf("%s\n", fruits[i]);
    // }

    // Exercise
    char names[3][25] = {0};

    int target = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < target; i++){
        printf("Enter a Name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\n';
        printf("the Name is: %s", names[i]);
    }




    return 0;
}