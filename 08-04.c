#include<stdio.h>
//简易四则运算练习
int main() {
    int num1, num2;
    char op;
    float answer;
    scanf("%d %c %d", &num1, &op, &num2);
    if (op == '+') {
        answer = num1 + num2;
    } else if (op == '-') {
        answer = num1 - num2;
    } else if (op == '*') {
        answer = num1 * num2;
    } else {
        answer = (float)num1 / num2;
    }
    printf("ANS: %f\n", answer);

    
    return 0;
}