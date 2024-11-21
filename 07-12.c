#include<stdio.h>//输入输出源文件
#include<math.h>//数学函数源文件

int main() {
    int side1, side2, side3, t;
    printf("Please enter the lengths: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 > side2) {
        t = side1;
        side1 = side2;
        side2 = t;
    }
    if (side1 > side3) {
        t = side1;
        side1 = side3;
        side3 = t;
    }
    if (side2 > side3) {
        t = side2;
        side2 = side3;
        side3 = t;
    }
    if (side1 == side3) { 
        printf("Regular triangle");
    }
    if (side1 == side2 && side2 == side3) {
        printf("Isosceles triangle");
    }
    if (pow(side1, 2) + pow(side2, 2) == pow(side3, 2)) 
        printf("Rectangular triangle");//当if函数后面的大括号里只有一句话，大括号可以省略（不推荐）
    return 0;
}