#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "Written from C.";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("file written successfully");
    fclose(pFile);

    return 0;
}