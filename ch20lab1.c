// ch20lab1.c

#include <stdio.h>

int main()
{
    int num = 30;
    int *pX; // ������ ������ ���� pX ����
    int *pY;

    pX = &num; // pX �����ʹ� ���� num ����
    pY = &num;

    *pY += 5; // pY �������� ���� ���� 5 ����

    printf("num: %d, *pX: %d, *pY: %d\n", num, *pX, *pY);

    return 0;
}
