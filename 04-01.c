#include<stdio.h>

int main()
{
    //基本数据类型
    printf("short int : %d\n", sizeof(short int));//短整数
    printf("int : %d\n", sizeof(int));//整数            short int <= int <= long int <= long long int
    printf("long int : %d\n", sizeof(long int));//长整数

    printf("char : %d\n", sizeof(char));//子符

    printf("float : %d\n", sizeof(float));//单精度浮点数
    printf("double : %d\n", sizeof(double));//双精度浮点数 



    printf("long long int : %d\n", sizeof(long long int));//更长整数
    printf("long double : %d\n", sizeof(long double));//长双精度浮点数

    


    return 0;
}