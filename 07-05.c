#include<stdio.h>

int main() {
<<<<<<< HEAD
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
=======
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
>>>>>>> 93f186b79f2935211a0b57f8eba3a8162be7cd31
    return 0;
}