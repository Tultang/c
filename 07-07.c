#include<stdio.h>
//输入一大一小两个数，从小到大排序。
int main() {
    int integer1, integer2, temporary;
    printf("Please enter three integer: ");
    scanf("%d %d", &integer1, &integer2);
    temporary = integer1;
    integer1 = integer2;
    integer2 = temporary;
    printf("%d < %d", integer1, integer2);
    return 0;
}