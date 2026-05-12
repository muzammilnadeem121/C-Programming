#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));  // use a seed value to generate a value so the number is different
                        // everytime in this case we use the current time as a seed
    printf("%d", rand());
    printf("%d", RAND_MAX); // the maximum random number
    int min = 1;
    int max = 6;
    int randomNum = (rand() % (max - min + 1)) + min; // this will generate a random number between min and max
    printf("%d", randomNum);

    return 0;
}