#include<stdio.h>

/* int main()
{

    int integer1, integer2, integer3, sum;
    // int integer1;
    // int integer2;
    // int integer3;
    // int sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enten the second integer: ");
    scanf("%d", &integer2);
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);
    sum = integer1 + integer2 + integer3;
    printf("sum is %d.\n", sum);
    return 0;
} */

int main()
{
    int integer, sum;
    printf("Please enter the fiest integer: ");
    scanf("%d", &integer);
    sum= integer;
    printf("Please enter the secomd integer: ");
    scanf("%d", &integer);
    sum= integer+ sum;
    printf("Please enter the third integer: ");
    scanf("%d", &integer);
    sum= integer+ sum;
    printf("Sum is %d", sum);
    return 0;
}
