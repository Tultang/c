#include<stdio.h>

int main() {
    int integer1, integer2, integer3, med;
    printf("Please enter three integer: ");
    scanf("%d %d %d.", &integer1, &integer2, &integer3);
    med = integer1;
    if (integer2 > integer1 && integer3 >= integer2 || integer3 < integer2 && integer2 <= integer1) {
        med = integer2;
    }
    if (integer3 > integer2 && integer1 > integer3 || integer1 < integer3 && integer3 < integer2) {
        med = integer3;
    }
    printf("The median is %d.", med);
    return 0;
}