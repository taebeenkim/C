// ch13ex1.c
// 5���� ���� �հ� ���ϱ�

#include <stdio.h>

int main()
{
    int num;
    int cnt = 0;
    int sum = 0;

    while (cnt < 5)
    {
        printf("���� �Է�: ");
        scanf("%d", &num);

        sum += num;
        cnt++;
    }

    printf("�հ�� %d�Դϴ�. \n", sum);

    return 0;
}
