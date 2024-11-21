/* #include<stdio.h>

int main() {
    int integer1, integer2;
    printf("Please enter two integer: ");
    scanf("%d %d", &integer1, &integer2);
    if (integer1 > integer2) {
        integer1 = integer1 + integer2;
        integer2 = integer1 - integer2;
        integer1 = integer1 - integer2;
    }
    printf("tow integer : %d < %d.", integer1, integer2);
    return 0;
} */

#include<stdio.h>

int main() {
    int a, b, c, max, min, mid;
    printf("Please enter three integer: ");
    scanf("%d %d %d", &a, &b, &c);
    min = a, mid = b, max = c;
    if (a > c) {
        max = a;
        min = c;
    }
    if (b > max) {
        mid = max;
        max = b;
    }
    if (min > b) {
        mid = min;
        min = b;
    }
    printf("Three integer: %d %d %d.", min, mid, max);
    return 0;
}