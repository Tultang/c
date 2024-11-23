#include<stdio.h>
//根据符号直接执行相应的公式 switch函数
int main() {
    int num1, num2;
    char op;
    float answer;
    scanf("%d%c%d", &num1, &op, &num2);
    switch (op) {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = (float) num1 / num2;
            break;
    }
    printf("ANS: %f\n", answer);
    return 0;
}