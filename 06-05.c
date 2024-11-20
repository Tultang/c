#include<stdio.h>

int main() {
    int side1, side2, side3;
    printf("Please enter the sides: ");
    scanf("%d %d %d", &side1, &side2,&side3);
    if (side1 == side2) {// &&Âß¼­Óë   ||Âß¼­·Ç
        if(side2 == side3) {
            printf("Regular triangle.");
        }
    }
    return 0;
}