/* #include<stdio.h>

int main() {
    int a = 5;
    if(a > 4) {
        printf("a is larger than 4.\n");
    }
    if(a < 4) {
        printf("a is smaller than 4.\n");
    }
    if(a == 4) {
        printf("a is equal to 4.\n");
    }
    return 0;
} */

#include<stdio.h>

int main()
{
    int guess, answer = 4;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if(guess > answer) {
        printf("too larger!\n");
    }
    if(guess < answer) {
        printf("too small!\n");
    }
    if(guess == answer) {
        printf("correct!\n");
    }
    return 0;
}