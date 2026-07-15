#include <stdio.h>
int main() {
    int a = 10;
    int b = 5;

    printf("AND = %d\n", (a > 5 && b > 2));
    printf("NOT = %d\n", (a > 15 || b > 2));
    printf("OR = %d\n", !(a > 15 ));
    return 0;
}

 

