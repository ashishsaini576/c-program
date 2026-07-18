#include <stdio.h>
int main() {
    int grade;

    printf("enter to grade: ");
    scanf("%d", &grade);

    if(grade >= 90) {
        printf("GRADE a");
    }
    else if (grade >= 75) {
        printf("GRADE b");
    }
    else if (grade >= 50) {
        printf("GRADE c");
    }
    else {
        printf("fail)");
    }
    return 0;

}