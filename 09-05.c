#include<stdio.h>
//求不定个数正整数平均值
int main() {
    int num, sum = 0;
    int count = 0;
    float  average;
    printf("Please enter the numbers (quit: 0) :\n");
    scanf("%d", &num);
    if (num == 0) {
        printf("The aberage is N/A.");
    } else {
        while ( num != 0) {
            sum = sum + num;
            count = count + 1;
            scanf("%d", &num);
        }
        average = (float) sum / count;
        printf("The average is %f.\n", average);
    }
    return 0;
}