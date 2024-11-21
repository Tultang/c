/* #include<stdio.h>

int main() {
    int integer1, integer2, min;
    printf("Please enter two integer: ");
    scanf("%d %d", &integer1, &integer2);
    min = integer1;
    if (integer1 > integer2) {
        min = integer2;
    }
    printf("The mininum is %d.", min);
    return 0;
} */

#include<stdio.h>

int main() {
    int integer1, integer2, integer3, min;
    printf("Please enter three integer: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    min = integer1;
    if (min > integer2) {
        min = integer2;
    }
    if (min > integer3) {
        min = integer3;
    }
    printf("The minxunm is %d.", min);
    return 0;
}