#include <stdio.h>

int main(){
    // you have to fix the number of cols
    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};


    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}