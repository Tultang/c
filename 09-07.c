#include<stdio.h>

int main() {
    int guess, answer = 4;
//������һ�ε��ظ�ִ�У�do - while����
    do {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too large!\n");
        } else if (guess < answer) {
            printf("Too small!\n");
        } else {
            printf("Correct!\n");
        }
    }
    while (guess != answer);
    return 0;
}