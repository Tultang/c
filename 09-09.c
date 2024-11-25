#include<stdio.h>

int main() {
    int num, sum = 0;
    do {
        scanf("%d", &num);
        switch (num) {
        case 1:
            sum += 90;
            break;
        case 2:
            sum += 75;
            break;
        case 3:
            sum += 83;
            break;
        case 4:
            sum += 89;
            break;
        case 5:
            sum += 71;
            break;
        }
    } 
    while (num != 0);
    printf("Total = %d", sum);
    return 0;
}