#include<stdio.h>

int main() {
    int numbre, total;
    printf("Please enter the numbre of custmers: ");
    scanf("%d", &numbre);
    total = numbre * 300;
    if (total >= 3000) {
        total = total * 0.8;
    }
     printf("Total: %d.", total);
    return 0;
}