#include<stdio.h>
//使用者输入成绩后，判断成绩是否合格（60分）。通过（pass) 不通过（fail）
/* int main() {
    int grade;
    printf("Please enter the grade: ");
    scanf("%d", &grade);
    if (grade >= 60) {
        printf("PASS");
    }
    if (grade < 60) {
        printf("FALL");
    }
    return 0;
} */

int main() {
    int grade;
    printf("Please enter the grade: ");
    scanf("%d", &grade);
    if (grade >= 60) { 
        printf("PASS");
    } else {
        printf("FALL");
    }
    return 0;
}