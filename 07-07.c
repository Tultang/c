#include<stdio.h>
//����һ��һС����������С��������
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