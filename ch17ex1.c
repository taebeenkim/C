// ch17ex1.c
// �����迭 �Է¹ޱ�

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    int c = 0;
    float avg;
    int n[5];

    for(i = 0; i < 5; i++)
    {
        printf("%d��° ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &n[i]);
    }

    // �Է� ���� ��� �� ����ϱ�
    // �������� ������ �� �ٷ� ���
    for(i = 0; i < 5; i++)
        printf("%d ", n[i]);
    printf("\n");

    // 3��°�� �Էµ� ���� ����ϱ�
    // 3��°�� �Էµ� ������ 00�Դϴ�.
    printf("3��°�� �Էµ� ������ %d�Դϴ�.\n,", n[2]);

    // �Էµ� �� ��(s) ���ϱ�
    for(i = 0; i < 5; i++)
    {
        s += n[i];
        c++;
    }
    avg = (float)s / c;
    printf("����: %d\n", s);
    printf("�л���: %d\n", c);
    printf("���: %.1f\n", avg);

    return 0;
}
