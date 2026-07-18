#include <stdio.h>
int main() {
    int marks;

    printf(" enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 18){
        printf("eligble to vote: ");
    }
    else {
        printf("not eligble to vote: ");
    }
}