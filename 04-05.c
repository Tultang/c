#include<stdio.h>

int main()
{
    int numbre1, numbre2, numbre3;
    printf("Please enter the first integer : ");
    scanf("%d", &numbre1);
    printf("Please enter the second integer : ");
    scanf("%d", &numbre2);
    printf("Please enter the third integer : ");
    scanf("%d", &numbre3);
    double average = (numbre1 + numbre2 + numbre3) / 3. ;
    printf("Average : %f", average);
    return 0;
}
    