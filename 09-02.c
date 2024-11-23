#include<stdio.h>
//使用weile函数猜数字
int main() {
    int guess, answer = 4;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    while (guess != answer) {
        if (guess > answer) {
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
    }
    printf("Correcy!\n");
    return 0;
}