#include<stdio.h>

int main()
{
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    
    // int integer;
    // integer1 = integer;//һ���Ǵӵ��ںŴ��ұ߿�ʼ��ֵ
    // integer2 = integer1;
    // integer = integer2;

    // (integer1, integer2) = (integer2, integer1);//c++11�����ԣ�����ͬʱ��ֵ�������

    // int integer = integer1;//����1
    // integer1 = integer2;
    // integer2 = integer;
    
    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    
    
    printf("integer1 is %d\n", integer1);
    printf("integer2 is %d", integer2);
    return 0;
}