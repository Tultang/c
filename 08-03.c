#include<stdio.h>
//²ÂÊý×ÖÁ·Ï°£¨if- else
int main() {
    int answeer, guess;
    answeer = 5;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > answeer) {
        printf("Too large!\n");
    } else if (guess < answeer) {
        printf("Too small!\n");
    } else {
        printf("Correct!\n");
    }
    return 0;
}