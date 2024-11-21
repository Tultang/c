#include<stdio.h>

int main() {
    int integer1, integer2, integer3, integer4, max;
    printf("Please enter four integers: ");
    scanf("%d %d %d %d", &integer1, &integer2, &integer3, &integer4);
/*     max = integer1;
    if (integer2 > integer1 && integer2 >= integer3 && integer2 >= integer4) {
        max = integer2;
    }
    if (integer3 > integer1 && integer3 > integer2 && integer3>= integer4) {
        max = integer3;
    }
    if (integer4 > integer1, integer4 > integer2, integer4 > integer3) {
        max = integer4;
    } */
    max = integer1;
    if (integer2 > max) {
        max = integer2;
    }
    if (integer3 > max) {
        max = integer3;
    }
    if (integer4 > max) {
        max = integer4;
    }
    printf("The maxiunm is %d.\n", max);
    return 0;
}