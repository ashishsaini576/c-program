#include <stdio.h>
int main() {
    int age;

    printf("enter age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("eligble to vote \n"); 
    
        if(age >= 21) {
            printf("eligble for driving license: ");
        }
    } else {
        printf("not eligble: ");
    }
    return 0;

}