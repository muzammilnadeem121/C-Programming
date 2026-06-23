#include <stdio.h>

// enum Days {
//     SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
// };

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Days;

int main(){

    // enum Days day;
    Days day;

    printf("What Day is it ? (0-6) ");
    scanf("%d", &day);
    
    switch (day)
    {
    case SUNDAY :
        printf("Today is Sunday.");
        break;
    case MONDAY :
        printf("Today is Monday.");
        break;
    case TUESDAY :
        printf("Today is Tuesday.");
        break;
    case WEDNESDAY :
        printf("Today is Wednesday.");
        break;
    case THURSDAY :
        printf("Today is Thursday.");
        break;
    case FRIDAY :
        printf("Today is Friday.");
        break;
    case SATURDAY :
        printf("Today is Saturday.");
        break;
    
    default:
        printf("Please enter a Valid day");
        break;
    }


    return 0;
}