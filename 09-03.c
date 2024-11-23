#include<stdio.h>
//数一数猜了多少次？
/* int main() {
    int guess, answer = 4;
    int count = 1;
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
        count = count + 1;
    }
    printf("Correct! (%d)\n", count);
    return 0;
} */

int main() {
    int guess, answer = 4;
    int count = 0;
    while (count = 0 || guess != answer) {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count = count + 1;
        if (guess > answer) {
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
    }
    printf("Correct! (%d)\n", count);
    return 0;
}