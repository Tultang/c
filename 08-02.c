#include<stdio.h>
//ʹ��if-else�����ȴ�С
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