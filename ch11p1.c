// ch11p1.c
// ���� ������(���� ������)

#include <stdio.h>

int main()
{
    int num;

    num = 1;
    printf("���� %d���� ��%s �Ծ���.\n", num,
            num > 1 ? "����" : "��");

    printf("%d�� %s�Դϴ�.", num,
           num % 2 == 0 ? "¦��" : "Ȧ��");

    return 0;
}
