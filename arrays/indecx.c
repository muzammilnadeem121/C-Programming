#include <stdio.h>

int main()
{

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = { 'A', 'B', 'C', 'D', 'F' };

    int target = sizeof(numbers) / sizeof(numbers[0]);   // sizeof function returns the size
    // in bytes so to calculate the number of elements we'll have to divide the total size of array
    // with the size of a single element

    for (size_t i = 0; i < target; i++)
    {
        printf("%d \n", numbers[i]);
        printf("%c\n", grades[i]);
    }

    return 0;
}