#include<stdio.h>

int main()
{
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    
    // int integer;
    // integer1 = integer;//一定是从等于号从右边开始赋值
    // integer2 = integer1;
    // integer = integer2;

    // (integer1, integer2) = (integer2, integer1);//c++11新特性，可以同时赋值多个变量

    // int integer = integer1;//方法1
    // integer1 = integer2;
    // integer2 = integer;
    
    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    
    
    printf("integer1 is %d\n", integer1);
    printf("integer2 is %d", integer2);
    return 0;
}