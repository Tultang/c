#include<stdio.h>
//对三个数依照由小到大排序
int main() {
    int a, b, c, t;
    printf("Please emter three integer: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < c && c < b) {
        t = b; b = c; c = t;
    }
    if (b < a && a < c) {
        t = a; a = b; b = t;
    }
    if (b < c && c < a) {
        t = b; b = c; c = a; a = t;
    }
    if (c < a && a < b) {
        t = c; c = b; b = a; a = t;
    }
    if (c < b && b < a) {
        t = c; c = a; a = t;
    }
    scanf("%d < %d < %d.", a, b, c);
    return 0;
}//总会有漏的