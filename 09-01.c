#include<stdio.h>
//while（有条件的重复执行）
int main() {
    int count = 0;
    while (count < 3) {
        printf("%d\n", count);
        count = count + 1;
    }
    return 0;
}