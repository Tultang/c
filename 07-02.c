#include<stdio.h>

int main() {
    int integer1, integer2, integer3, max;
    printf("Please enter three intrger: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    max = integer1;
    if (max < integer2) {
        max = integer2;
    }
    if (max < integer3) {
        max = integer3;
    }
    printf("The maxinum is %d", max);
    return 0;
}