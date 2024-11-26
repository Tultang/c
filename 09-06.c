#include<stdio.h>
//印出1到10的连续整数
/* int main() {
    int num = 1;
    while (num <= 10) {
        printf("%d\n", num);
        num = num + 1;
    }
    return 0;
} */
//印出1到N
int main() {
    int N, num = 1;
    printf("Please enter the number: ");
    scanf("%d", &N);
    while (num <= N) {
        printf("%d\n", num);
        num = num + 1;
    }
    return 0;
}
