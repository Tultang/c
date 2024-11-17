/* #include<stdio.h>//印出“Hello Werld！”

int main()
{
    printf("Hello World!");
    
    return 0;
} */

/* #include<stdio.h>//印出“Hello “C” Werld”

int main()
{
    printf("Hello \"C\" World!");
    return 0;
} */

/* #include<stdio.h>//计算两个整数的和

int main()
{
    int integer1, integer2, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    
    sum = integer1 + integer2;
    
    printf("Sum is %d", sum);
    return 0;
} */

/* #include<stdio.h>//计算三个整数的和

int main()
{
    int integer1, integer2, integer3;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the secand integer: ");
    scanf("%d", &integer2);
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);
    
    integer2 = integer1 + integer2;
    integer3 = integer2 + integer3;

    printf("Sum is %d", integer3);
    return 0;
} */

/* #include<stdio.h>//调换两个数的位置 将a， b换到b， a。

int main()
{
    int a, b;
    printf("Please enter the first a:");
    scanf("%d", &a);
    printf("Please enter the second b:");
    scanf("%d", &b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("First a = %d\n", a);
    printf("Secand b = %d", b);
    return 0;
} */

/* #include<stdio.h>//调换三个数的位置 将a， b， c换到c， a， b。

int main()
{
    int a, b, c;
    printf("Please enter the frist a : ");
    scanf("%d", &a);
    printf("Please enter the second b : ");
    scanf("%d", &b);
    printf("Please enter the third c : ");
    scanf("%d", &c);
    
    // a = a + b + c;
    // b = a - b - c;
    // c = a - b - c;
    // a = a - b - c;
    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;

    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0 ;
} */