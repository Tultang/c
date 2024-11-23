#include<stdio.h>

int main() {

    int integer1, integer2, integer3, mid;
    printf("Please enter three integer: ");
    scanf("%d %d %d.", &integer1, &integer2, &integer3);
    mid = integer1;
    if (integer2 > integer1 && integer3 >= integer2 || integer3 < integer2 && integer2 <= integer1) {
        mid = integer2;
    }
    if (integer3 > integer2 && integer1 > integer3 || integer1 < integer3 && integer3 < integer2) {
        mid = integer3;
    }
    printf("The median is %d.", mid);
    return 0;
}
