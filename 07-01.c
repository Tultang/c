#include<stdio.h>

int main() {
    int integer1, integer2, max;
    printf("Please enter the frist integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    max = integer1;
    if (max > integer2) {
        max = integer2;
    }
    printf("The maxinum is %d", max);
    return 0;
}