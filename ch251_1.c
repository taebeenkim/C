// ch25ex1_1.c
// �μ��� ������ ���� ����

#include <stdio.h>

void twice(int *pn);

int main()
{
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d,", &n);

    twice(&n);
    printf("In main n: %d\n", n);

    return 0;
}

void twice(int *pn)
{
    *pn *= 2;
    printf("In twice n: %d\n", *pn);
}

