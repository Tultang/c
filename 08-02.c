#include<stdio.h>
//使用if-else函数比大小
int main() {
    int a, b;
    printf("Pleas enter a and b: ");
    scanf("%d%d", &a, &b);
    if (a > b) {
        printf("a > b");
    } else if (b > a) {
        printf("a < b");
    } else {
        printf("a = b");
    }
    return 0;
}