#include<stdio.h>
//输入'A' 'B' 'C'三数，输出'C' 'A' 'B'|输入'B' 'C' 'A'。
/* int main() {
    int integer1, integer2, integer3, temporary;
    printf("Please enter three integer: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    temporary = integer1;
    integer1 = integer3;
    integer3 = integer2;
    integer2 = temporary;
    printf("C = %d, A = %d, B = %d.", integer1, integer2, integer3);
    return 0;
} */
//输出'C' 'A' 'B'
int main() {
    int integer1, integer2, integer3, temporary;
    printf("Please enter three integer: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    temporary = integer1;
    integer1 = integer2;
    integer2 = integer3;
    integer3 = temporary;
    printf("'B' = %d, 'C' = %d, 'A' = %d", integer1, integer2, integer3);
    return 0;
}