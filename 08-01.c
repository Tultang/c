#include<stdio.h>
//ʹ��������ɼ����жϳɼ��Ƿ�ϸ�60�֣���ͨ����pass) ��ͨ����fail��
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