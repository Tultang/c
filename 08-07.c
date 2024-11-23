#include<stdio.h>
//id²éÑ¯µÄÁ·Ï°
int main() {
    int id;
    printf("Please enter is id: ");
    scanf("%d", &id);
    switch(id) {
        case 2:
            printf("The id is John");
            break;
        case 13:
            printf("The id is MAry");
            break;
        case 16:
            printf("The id is Amy");
            break;
        default :
            printf("Not found\n");
    }
    return 0;
}