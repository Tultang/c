#include<stdio.h>
//����'A' 'B' 'C'���������'C' 'A' 'B'|����'B' 'C' 'A'��
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
//���'C' 'A' 'B'
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