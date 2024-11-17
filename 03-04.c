#include<stdio.h>

int main()
{
    int integer1;
    int integer2;
    int sum;
    printf("please enter the first integer: ");
    scanf("%d", &integer1);//
    printf("please enten the second integer: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d.\n",sum);
    return 0;
}

