#include <stdio.h>
int main() {
    int a, b;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    if(a > b) {
        printf("%d is largest", a);
    }
    else {
        printf("%d is largst", b);
    }
    return 0;
}