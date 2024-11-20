#include<stdio.h>

int main()
{
    char ASCII;

    printf("PLesae enter the first input : ");//input =  ‰»Î £ª output =  ‰≥ˆ
    scanf("%c", &ASCII);
    ASCII = ASCII + ' ';
    printf("%c\n", ASCII);

    return 0;
}