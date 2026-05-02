#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] = "";
    char verb[50] = "";
    char Adjective1[50] = "";
    char Adjective2[50] = "";
    char Adjective3[50] = "";

    printf("Enter an Adjective (description): ");
    fgets(Adjective1, sizeof(Adjective1), stdin);
    Adjective1[strlen(Adjective1) - 1] = '\0';

    printf("Enter a Noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an Adjective (description): ");
    fgets(Adjective2, sizeof(Adjective2), stdin);
    Adjective2[strlen(Adjective2) - 1] = '\0';

    printf("Enter a Verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an Adjective (description): ");
    fgets(Adjective3, sizeof(Adjective3), stdin);
    Adjective3[strlen(Adjective3) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", Adjective1);
    printf("In an exhibit I saw a %s.\n", noun);
    printf("%s was %s and %s.\n", noun, Adjective2, verb);
    printf("I was %s!.", Adjective3);

    return 0;
}