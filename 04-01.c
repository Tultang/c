#include<stdio.h>

int main()
{
    //������������
    printf("short int : %d\n", sizeof(short int));//������
    printf("int : %d\n", sizeof(int));//����            short int <= int <= long int <= long long int
    printf("long int : %d\n", sizeof(long int));//������

    printf("char : %d\n", sizeof(char));//�ӷ�

    printf("float : %d\n", sizeof(float));//�����ȸ�����
    printf("double : %d\n", sizeof(double));//˫���ȸ����� 



    printf("long long int : %d\n", sizeof(long long int));//��������
    printf("long double : %d\n", sizeof(long double));//��˫���ȸ�����

    


    return 0;
}