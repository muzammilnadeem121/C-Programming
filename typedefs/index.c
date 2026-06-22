#include <stdio.h>

int main(){
    // typedef existing_type new_type

    typedef int Number;
    typedef char String[50];

    Number x = 1;
    Number y = 10;
    Number z = 20;
    
    String name = "John Doe";

    printf("%d\n", x * y * z);
    printf("%s", name);

    return 0;
}