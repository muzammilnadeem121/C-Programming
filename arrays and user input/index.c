#include <stdio.h>

int main(){

    int scores[5] = {0};
    int target = sizeof(scores) / sizeof(scores[0]);

    for (size_t i = 0; i < target; i++)
    {
        printf("Enter a Number: ");
        scanf("%d", &scores[i]);
    }

    for (size_t i = 0; i < target; i++)
    {
        printf("%d ", scores[i]);
    }
    
    

    return 0;
}