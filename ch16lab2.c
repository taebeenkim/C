//ch16lab2.c
//�ǽ�����

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    int r;

    srand(time(NULL)); // ���� �õ尪 �ʱ�ȭ

    printf("���� ���: ");
    for(i = 0; i < 0; i++)
    {
        r = rand() % 100 + 1;
        printf("%d", r);
    }

    return 0;
}
