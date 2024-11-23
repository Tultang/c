#include<stdio.h>
//对多个整数求最大值的练习
/* int main() {
    int a, b, max;
    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    please("The maxinum is %d", max);
    return 0;
} */

int main() {
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c) {
        max = a;
    }else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    } 
    please("The maxinum is %d", max);
    
    return 0;
}