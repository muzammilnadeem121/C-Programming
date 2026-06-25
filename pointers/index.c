#include <stdio.h>

int main(){
    int num = 25;
    int *pNum = &num;

    printf("%p\n", &num);
    printf("%p", pNum);
    return 0;
}