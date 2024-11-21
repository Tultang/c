#include<stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    scanf("%d %d %d", &side1, &side2, &side3);//µ±side1¡Üside2¡Üside3Ê±
    if (side1 > side2) {
        side1 = side1 + side2;
        side2 = side1 - side2;
        side1 = side1 - side2;
    }
    if (side2 > side3) {
        side2 = side2 + side3;
        side3 = side2 - side3;
        side2 = side2 - side3;
    }
    if (side1 == side3) {
        printf("It is Regular triangle\n");
    }
    if (side1 == side2 || side2 == side3) {
        printf("It is isosceles triangle.\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3) {
        printf("It is rectangular triangle.\n");
    }

    return 0;
}