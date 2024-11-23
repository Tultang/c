#include<stdio.h>
//求不定个数正整数和的练习
int main() {
    int num, sum = 0;
    printf("Please enter the numbers (quit: 0)\n");
    scanf("%d", &num);
    while (num != 0) {
        sum = sum + num;
        scanf("%d", &num);
    }
    printf("The sum is %d.", sum);
    return 0;
}